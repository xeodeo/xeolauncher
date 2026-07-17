"""
Corrige los mapas de normales (_n.png) y especulares (_s.png) en Patrix_xeodeo.
Estos archivos codifican datos vectoriales — LANCZOS los corrompe al interpolar.
Fix: re-escala desde el ZIP original 128x usando NEAREST (copia exacta de pixeles).

Uso: python fix_normal_maps.py
"""
import zipfile, io, os
from PIL import Image

BASE   = os.path.dirname(os.path.abspath(__file__))
SRC    = os.path.join(BASE, "Patrix_1.21.11_128x_basic.zip")
OUTDIR = os.path.join(BASE, "Patrix_xeodeo")
SCALE  = 0.5

if not os.path.exists(SRC):
    print(f"ERROR: No encuentro {SRC}")
    exit(1)
if not os.path.exists(OUTDIR):
    print(f"ERROR: No encuentro carpeta {OUTDIR}")
    exit(1)

print("Corrigiendo mapas de normales y especulares (_n, _s)...")
src_zip = zipfile.ZipFile(SRC, "r")
fixed = skipped = errors = 0

for info in src_zip.infolist():
    name = info.filename
    nl   = name.lower()

    if not (nl.endswith("_n.png") or nl.endswith("_s.png")):
        continue

    rel  = name.replace("\\", "/")
    parts = rel.split("/")
    dest = os.path.join(OUTDIR, *parts)

    if not os.path.exists(dest):
        skipped += 1
        continue

    data = src_zip.read(name)
    try:
        img = Image.open(io.BytesIO(data))
        w, h = img.size
        nw = max(1, round(w * SCALE))
        nh = max(1, round(h * SCALE))

        if img.mode not in ("RGB", "RGBA", "L"):
            img = img.convert("RGBA")

        # NEAREST — sin interpolacion, preserva valores exactos de canal
        img_out = img.resize((nw, nh), Image.NEAREST)

        buf = io.BytesIO()
        img_out.save(buf, format="PNG", optimize=False)
        with open(dest, "wb") as f:
            f.write(buf.getvalue())
        fixed += 1

        if fixed % 1000 == 0:
            print(f"  {fixed} corregidas...", flush=True)

    except Exception as e:
        print(f"  ERROR {name}: {e}")
        errors += 1

src_zip.close()
print(f"\nListo.")
print(f"  _n/_s corregidas: {fixed}")
print(f"  No existian:      {skipped}")
print(f"  Errores:          {errors}")

print()
exec(open(os.path.join(BASE, "repack.py")).read())
