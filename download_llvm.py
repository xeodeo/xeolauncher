import urllib.request
import zipfile
import os
import sys
import shutil

buildenv = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'buildenv')
url = 'https://github.com/mstorsjo/llvm-mingw/releases/download/20241217/llvm-mingw-20241217-ucrt-x86_64.zip'
dest = os.path.join(buildenv, 'llvm-mingw.zip')
final = os.path.join(buildenv, 'llvm-mingw')

# Find already-extracted folder if zip was removed mid-run
extracted = None
for name in os.listdir(buildenv):
    path = os.path.join(buildenv, name)
    if name.startswith('llvm-mingw-') and os.path.isdir(path):
        extracted = path
        break

if extracted is None:
    print('Downloading LLVM-MinGW (~200MB)...')
    urllib.request.urlretrieve(url, dest)
    print('Extracting...')
    z = zipfile.ZipFile(dest)
    top = z.namelist()[0].split('/')[0]
    z.extractall(buildenv)
    z.close()
    extracted = os.path.join(buildenv, top)
    os.remove(dest)
else:
    print('Found already-extracted folder:', extracted)

if os.path.exists(final):
    shutil.rmtree(final)
print('Moving to llvm-mingw...')
shutil.copytree(extracted, final)
shutil.rmtree(extracted)
print('Done')
