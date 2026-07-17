import os
BASE = os.path.dirname(os.path.abspath(__file__))

bats = {
    "REBUILD_PACK.bat": "@echo off\ncd /d \"%~dp0\"\necho Reconstruyendo Patrix_xeodeo...\npython rebuild_patrix_xeodeo.py\npause\n",
    "FIX_NORMAL_MAPS.bat": "@echo off\ncd /d \"%~dp0\"\necho Corrigiendo _n _s _e y reempacando...\npython fix_normal_maps.py\npause\n",
    "REPACK.bat": "@echo off\ncd /d \"%~dp0\"\necho Reempacando ZIP...\npython repack.py\npause\n",
}

for name, content in bats.items():
    path = os.path.join(BASE, name)
    # escribir sin BOM
    with open(path, "w", encoding="ascii", errors="replace") as f:
        f.write(content)
    print(f"Creado: {name}")

print("Listo. Haz doble clic en cualquier .bat para ejecutar.")
