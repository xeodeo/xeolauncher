import zipfile, io, os, sys

LOG_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "rebuild_log.txt")
log_file = open(LOG_PATH, "w", encoding="utf-8")

def log(msg=""):
    print(msg, flush=True)
    log_file.write(msg + "\n")
    log_file.flush()

try:
    from PIL import Image
except ImportError:
    log("ERROR: Pillow no instalado. Corre: pip install pillow")
    log_file.close()
    os.startfile(LOG_PATH)
    sys.exit(1)

try:
    import numpy as np
    HAS_NP = True
    log("numpy: SI")
except ImportError:
    HAS_NP = False
    log("numpy: NO (modo simple)")

BASE  = os.path.dirname(os.path.abspath(__file__))
SRC   = os.path.join(BASE, "Patrix_1.21.11_128x_basic.zip")
OUT   = os.path.join(BASE, "Patrix_xeodeo.zip")
SCALE = 0.5

log("=" * 50)
log("  Patrix Xeodeo Builder  128x -> 64x")
log("=" * 50)
log(f"Fuente : {SRC}")
log(f"Salida : {OUT}")
log(f"Log    : {LOG_PATH}")
log()

if not os.path.exists(SRC):
    log("ERROR: No se encuentra el ZIP fuente.")
    log_file.close()
    os.startfile(LOG_PATH)
    sys.exit(1)

def is_fixed(rel):
    n = rel.lower()
    return "/colormap/" in n or "/font/" in n

def is_data_map(rel):
    nl = rel.lower()
    return nl.endswith("_n.png") or nl.endswith("_s.png") or nl.endswith("_e.png")

def process_png(data, rel):
    img = Image.open(io.BytesIO(data))
    w, h = img.size
    nw = max(1, round(w * SCALE))
    nh = max(1, round(h * SCALE))
    if img.mode == "P":
        img = img.convert("RGBA")
    if is_data_map(rel):
        if img.mode not in ("RGB","RGBA","L","LA"):
            img = img.convert("RGBA")
        result = img.resize((nw, nh), Image.NEAREST)
    else:
        if img.mode != "RGBA":
            img = img.convert("RGBA")
        if HAS_NP:
            arr = np.array(img, dtype=np.float32)
            a   = arr[:,:,3:4] / 255.0
            pre = np.concatenate([arr[:,:,:3]*a, arr[:,:,3:4]], axis=2)
            pi  = Image.fromarray(np.clip(pre,0,255).astype(np.uint8),"RGBA")
            pr  = pi.resize((nw, nh), Image.LANCZOS)
            a2  = np.array(pr, dtype=np.float32)
            al  = a2[:,:,3:4] / 255.0
            s   = np.where(al>0, al, 1.0)
            rgb = np.where(al>0, a2[:,:,:3]/s, 0.0)
            out = np.concatenate([np.clip(rgb,0,255).astype(np.uint8),
                                  a2[:,:,3:4].astype(np.uint8)], axis=2)
            result = Image.fromarray(out,"RGBA")
        else:
            result = img.resize((nw, nh), Image.LANCZOS)
    buf = io.BytesIO()
    result.save(buf, "PNG", optimize=False)
    return buf.getvalue()

src     = zipfile.ZipFile(SRC, "r")
entries = src.infolist()
total   = len(entries)
log(f"Entradas en ZIP: {total}")
log("Procesando...")

if os.path.exists(OUT):
    os.remove(OUT)

dst = zipfile.ZipFile(OUT, "w", zipfile.ZIP_DEFLATED, compresslevel=6)

lanczos = nearest = fixed = other = errors = 0

for i, info in enumerate(entries):
    if (i+1) % 5000 == 0:
        pct = (i+1)/total*100
        log(f"  {pct:.0f}% ({i+1}/{total})  L:{lanczos} N:{nearest} E:{errors}")
    try:
        data = src.read(info.filename)
        rel  = info.filename.replace("\\","/")
        if rel.lower().endswith(".png"):
            if is_fixed(rel):
                dst.writestr(info, data); fixed += 1
            else:
                try:
                    dst.writestr(info, process_png(data, rel))
                    if is_data_map(rel): nearest += 1
                    else: lanczos += 1
                except Exception as e:
                    dst.writestr(info, data); errors += 1
                    log(f"  WARN: {rel} -> {e}")
        else:
            dst.writestr(info, data); other += 1
    except Exception as e:
        errors += 1
        log(f"  ERR: {info.filename} -> {e}")

src.close()
dst.close()

sz_src = os.path.getsize(SRC) / 1024 / 1024
sz_out = os.path.getsize(OUT) / 1024 / 1024

log()
log("=" * 50)
log("  ZIP CREADO EXITOSAMENTE")
log("=" * 50)
log(f"  Visual LANCZOS : {lanczos}")
log(f"  Datos NEAREST  : {nearest}")
log(f"  Sin tocar      : {fixed}")
log(f"  Otros          : {other}")
log(f"  Errores        : {errors}")
log(f"  {sz_src:.1f} MB -> {sz_out:.1f} MB ({(1-sz_out/sz_src)*100:.0f}% menor)")
log(f"  ZIP: {OUT}")

log_file.close()
os.startfile(LOG_PATH)
