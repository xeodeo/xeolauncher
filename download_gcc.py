import urllib.request
import zipfile
import os
import shutil
import json

buildenv = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'buildenv')
dest = os.path.join(buildenv, 'gcc.zip')
final = r'C:\gcc'

def extract_strip_top(zf, target_dir):
    """Extract zip directly into target_dir, stripping the top-level folder."""
    top = zf.namelist()[0].split('/')[0]
    for member in zf.infolist():
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

# Check if already done
if os.path.exists(os.path.join(final, 'bin', 'gcc.exe')):
    print('GCC already installed at', final)
    exit(0)

# Check if zip was already downloaded
if not os.path.exists(dest):
    # Find GCC 13.x UCRT x86_64 SEH via GitHub Releases API
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
                # Qt 6.7.3 uses mingw-w64 11.x (GCC 13.1 or 13.2) — 13.3 uses mingw-w64 12 (incompatible)
                if ('x86_64' in name and 'ucrt' in name and 'seh' in name
                        and 'posix' in name and name.endswith('.zip')
                        and ('gcc-13.1' in name or 'gcc-13.2' in name)):
                    url = asset['browser_download_url']
                    print(f'Encontrado: {asset["name"]}')
                    break
            if url:
                break
        if url:
            break

    if not url:
        print('ERROR: No se encontro GCC 13.x')
        exit(1)

    print('Descargando (~120MB)...')
    urllib.request.urlretrieve(url, dest)

# Clear existing broken install
if os.path.exists(final):
    print('Limpiando instalacion anterior...')
    shutil.rmtree(final)
os.makedirs(final, exist_ok=True)

print('Extrayendo directamente a C:\\gcc ...')
with zipfile.ZipFile(dest) as z:
    extract_strip_top(z, final)

os.remove(dest)
print('Done — GCC at C:\\gcc\\bin\\gcc.exe')
