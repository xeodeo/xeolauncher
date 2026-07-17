# XeoLauncher v12.0.0

Fork personalizado de [Prism Launcher](https://prismlauncher.org/) con mejoras enfocadas en privacidad, modo offline y experiencia visual.

---

## Novedades

### Tema visual Xeo Dark
- Nuevo tema oscuro morado moderno (`xeo-dark`) activado por defecto
- Paleta completa con `#7c3aed` / `#a855f7` como colores principales
- Scrollbars finos morados, bordes redondeados, tooltips oscuros
- Separadores y bordes de toolbars con estilo consistente

### Auto-actualización desde GitHub
- Al iniciar, el launcher consulta la API de GitHub para detectar nuevas versiones
- Banner no intrusivo cuando hay una actualización disponible
- Checkbox "No mostrar esta versión" para omitir releases específicos
- Botón directo a la página del release en GitHub
- Las releases también aparecen en la barra de noticias integrada

### Modo offline por instancia (SkipAuth)
- Opción por instancia para lanzar sin autenticación con servidores Mojang
- Diseñado para servidores con `online-mode=false` y juego en LAN
- Activable al crear la instancia o desde la configuración de cada una
- **No** aplica a servidores en modo online — requiere cuenta válida de Microsoft para esos

### Bloqueo de telemetría
- JVM args inyectados automáticamente cuando el modo offline está activo:
  - `-Dminecraft.api.auth.host=http://0.0.0.0`
  - `-Dminecraft.api.session.host=http://0.0.0.0`
  - `-Dminecraft.api.services.host=http://0.0.0.0`
- El archivo `options.txt` de instancias nuevas incluye `telemetryOptOut:true`

### News feed propio
- La barra de noticias muestra las releases de este repositorio
- Feed: `https://github.com/xeodeo/xeolauncher/releases.atom`

---

## Mejoras internas

- Eliminados los catpacks y referencias a assets de Prism Launcher
- Fix en carga de temas desde el directorio del ejecutable (`CustomTheme.cpp`)
- Script `build.bat` con menú interactivo (compilar / build limpio / borrar build)
- ZIP portable generado automáticamente sin incluir datos del usuario

---

## Instalación

1. Descarga `PrismLauncher-xeo.zip`
2. Extrae en cualquier carpeta
3. Ejecuta `xeolauncher.exe`

Los datos del usuario (instancias, mods, configs) se guardan en la carpeta `data/` junto al ejecutable.

**Requisitos:** Windows 10/11 64-bit. No requiere instalación ni permisos de administrador.

---

## Basado en

- [Prism Launcher](https://prismlauncher.org/) — GPL-3.0
- Qt 6.7.3 / MinGW 13.1.0
