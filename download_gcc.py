import urllib.request
import zipfile
import os
import shutil
import json
import sys

buildenv = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'buildenv')
dest = os.path.join(buildenv, 'gcc.zip')
final = os.path.join(buildenv, 'gcc')

def show_progress(block_num, block_size, total_size):
    downloaded = block_num * block_size
    if total_size > 0:
        pct = min(downloaded / total_size * 100, 100)
        filled = int(pct / 2)
        bar = '█' * filled + '░' * (50 - filled)
        mb_done = downloaded / 1_048_576
        mb_total = total_size / 1_048_576
        print(f'\r  [{bar}] {pct:5.1f}%  {mb_done:.1f}/{mb_total:.1f} MB', end='', flush=True)
    else:
        mb_done = downloaded / 1_048_576
        print(f'\r  Descargado: {mb_done:.1f} MB', end='', flush=True)

def extract_strip_top(zf, target_dir):
    """Extract zip directly into target_dir, stripping the top-level folder."""
    members = zf.infolist()
    top = members[0].filename.split('/')[0]
    total = len(members)
    for i, member in enumerate(members):
        rel = member.filename
        if rel.startswith(top + '/'):
            rel = rel[len(top) + 1:]
        if not rel:
            continue
        target = os.path.join(target_dir, rel.replace('/', os.sep))
        if member.is_dir():
            os.makedirs(target, exist_ok=True)
        else:
            os.makedirs(os.path.dirname(target), exist_ok=True)
            with zf.open(member) as src, open(target, 'wb') as dst:
                shutil.copyfileobj(src, dst)
        pct = (i + 1) / total * 100
        filled = int(pct / 2)
        bar = '█' * filled + '░' * (50 - filled)
        print(f'\r  [{bar}] {pct:5.1f}%  ({i+1}/{total} archivos)', end='', flush=True)
    print()

# Check if already done
if os.path.exists(os.path.join(final, 'bin', 'gcc.exe')):
    print('GCC already installed at', final)
    sys.exit(0)

# Check if zip was already downloaded
if not os.path.exists(dest):
    print('Buscando GCC 13.x en GitHub...')
    headers = {'User-Agent': 'Mozilla/5.0', 'Accept': 'application/vnd.github.v3+json'}

    url = None
    for page in [1, 2, 3, 4]:
        req = urllib.request.Request(
            f'https://api.github.com/repos/brechtsanders/winlibs_mingw/releases?per_page=30&page={page}',
            headers=headers
        )
        with urllib.request.urlopen(req, timeout=30) as r:
            releases = json.loads(r.read())
        if not releases:
            break
        for release in releases:
            for asset in release.get('assets', []):
                name = asset['name'].lower()
                if ('x86_64' in name and 'ucrt' in name and 'seh' in name
                        and 'posix' in name and name.endswith('.zip')
                        and ('gcc-13.1' in name or 'gcc-13.2' in name)):
                    url = asset['browser_download_url']
                    print(f'  Encontrado: {asset["name"]}')
                    break
            if url:
                break
        if url:
            break

    if not url:
        print('ERROR: No se encontro GCC 13.x')
        sys.exit(1)

    os.makedirs(buildenv, exist_ok=True)
    print('Descargando GCC (~120 MB)...')
    urllib.request.urlretrieve(url, dest, reporthook=show_progress)
    print()

# Clear existing broken install
if os.path.exists(final):
    print('Limpiando instalacion anterior...')
    shutil.rmtree(final)
os.makedirs(final, exist_ok=True)

print('Extrayendo GCC...')
with zipfile.ZipFile(dest) as z:
    extract_strip_top(z, final)

os.remove(dest)
print(f'Listo — GCC en {final}\\bin\\gcc.exe')
