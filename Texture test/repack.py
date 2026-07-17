import zipfile, os

BASE   = os.path.dirname(os.path.abspath(__file__))
OUTDIR = os.path.join(BASE, "Patrix_xeodeo")
OUTZIP = os.path.join(BASE, "Patrix_xeodeo.zip")

if not os.path.exists(OUTDIR):
    print("ERROR: carpeta Patrix_xeodeo no existe"); exit(1)

print("Reempacando ZIP...")
if os.path.exists(OUTZIP):
    os.remove(OUTZIP)

count = 0
with zipfile.ZipFile(OUTZIP, "w", zipfile.ZIP_DEFLATED, compresslevel=9) as z:
    for root, dirs, files in os.walk(OUTDIR):
        for f in files:
            full    = os.path.join(root, f)
            arcname = os.path.relpath(full, OUTDIR).replace("\\", "/")
            z.write(full, arcname)
            count += 1

sz = os.path.getsize(OUTZIP) / 1024 / 1024
print(f"Listo. {count} archivos, {sz:.1f} MB -> {OUTZIP}")
