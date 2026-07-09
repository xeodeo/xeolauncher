# xeolauncher v12.0.0

> Primera versión pública de xeolauncher — un launcher personalizado de Minecraft basado en Prism Launcher.

## Descarga

| Plataforma | Archivo |
|------------|---------|
| Windows (x64) | `xeolauncher-12.0.0-win64.zip` |
| Linux (x64) | `xeolauncher-12.0.0-linux64.tar.gz` |
| macOS (Universal) | `xeolauncher-12.0.0-macos.dmg` |

> **Nota:** Los binarios de esta versión aún no están publicados. Compila desde el código fuente siguiendo las instrucciones en [README.md](README.md).

## Requisitos del sistema

- **Windows:** Windows 10 o superior (64 bits)
- **Linux:** glibc 2.31+, X11 o Wayland
- **macOS:** macOS 12 Monterey o superior
- **Java:** Se detecta o instala automáticamente. Java 8 es requerido para versiones antiguas de Minecraft; Java 21 recomendado para 1.21+.
- **Memoria:** 512 MB libres para el launcher; asigna RAM adicional por instancia según sea necesario.

## Qué incluye

### Gestión de instancias
- Crear, duplicar y eliminar instancias de Minecraft de forma independiente
- Configuración de versión de Java y memoria por instancia
- Comandos personalizados antes del lanzamiento y al cerrar el juego

### Cuentas
- Autenticación con Microsoft/Xbox Live (partidas online completas)
- Modo sin conexión para LAN y pruebas de mods

### Integración con plataformas de mods
- **CurseForge** — busca e instala mods, resource packs y modpacks
- **Modrinth** — exploración e instalación completa de mods y modpacks
- **ATLauncher** — importa y ejecuta packs de ATLauncher
- **Feed The Beast (FTB)** — explora y lanza modpacks de FTB
- **Technic** — soporte para modpacks de la plataforma Technic
- **PackWiz** — soporte para el formato PackWiz orientado al desarrollo

### Gestión de contenido (por instancia)
- Mods (activar/desactivar/eliminar sin tocar los archivos del juego)
- Resource packs
- Data packs
- Shader packs
- Texture packs

### Otras funciones
- Detección automática de Java e instalación opcional
- Visor de capturas de pantalla con subida a Imgur
- Gestión de mundos y lista de servidores
- Exportar e importar instancias como archivos zip
- Temas visuales personalizables para el launcher

## Problemas conocidos

- No hay binarios publicados aún — compila desde el código fuente como se indica en [README.md](README.md).
- La firma de código en macOS no está configurada; Gatekeeper puede requerir aprobación manual al primer inicio.

## Compilar esta versión

```bash
git clone https://github.com/xeodeo/xeolauncher.git
cd xeolauncher
cmake -B build -S "Codigo fuente/PrismLauncher-develop" \
      -DCMAKE_BUILD_TYPE=Release \
      -DLauncher_BUILD_PLATFORM=local
cmake --build build --config Release --parallel
```

Consulta [README.md](README.md) para los prerrequisitos completos e instrucciones específicas por plataforma.

## Licencia

GPL-3.0-only. Código fuente disponible en https://github.com/xeodeo/xeolauncher.  
Basado en [Prism Launcher](https://prismlauncher.org/) y [MultiMC](https://multimc.org/).
