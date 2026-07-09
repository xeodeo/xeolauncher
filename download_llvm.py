import urllib.request
import zipfile
import os
import sys
import shutil

buildenv = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'buildenv')
url = 'https://github.com/mstorsjo/llvm-mingw/releases/download/20241217/llvm-mingw-20241217-ucrt-x86_64.zip'
dest = os.path.join(buildenv, 'llvm-mingw.zip')
final = os.path.join(buildenv, 'llvm-mingw')

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

# Find already-extracted folder if zip was removed mid-run
extracted = None
if os.path.isdir(buildenv):
    for name in os.listdir(buildenv):
        path = os.path.join(buildenv, name)
        if name.startswith('llvm-mingw-') and os.path.isdir(path):
            extracted = path
            break

if extracted is None:
    os.makedirs(buildenv, exist_ok=True)
    print('Descargando LLVM-MinGW (~200 MB)...')
    urllib.request.urlretrieve(url, dest, reporthook=show_progress)
    print()
    print('Extrayendo...')
    z = zipfile.ZipFile(dest)
    top = z.namelist()[0].split('/')[0]
    members = z.infolist()
    total = len(members)
    for i, member in enumerate(members):
        z.extract(member, buildenv)
        pct = (i + 1) / total * 100
        filled = int(pct / 2)
        bar = '█' * filled + '░' * (50 - filled)
        print(f'\r  [{bar}] {pct:5.1f}%  ({i+1}/{total} archivos)', end='', flush=True)
    print()
    z.close()
    extracted = os.path.join(buildenv, top)
    os.remove(dest)
else:
    print('Carpeta ya extraida:', extracted)

if os.path.exists(final):
    shutil.rmtree(final)
print('Moviendo a llvm-mingw...')
shutil.copytree(extracted, final)
shutil.rmtree(extracted)
print('Listo — LLVM-MinGW en', final)
