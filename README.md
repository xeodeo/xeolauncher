# xeolauncher

A custom Minecraft launcher based on [Prism Launcher](https://prismlauncher.org/), built to manage multiple Minecraft instances with full mod platform support.

## Features

- **Multiple instances** — create, copy, and manage independent Minecraft installations side by side
- **Account management** — Microsoft/Xbox Live authentication and offline mode support
- **Mod platforms** — browse and install mods directly from CurseForge, Modrinth, ATLauncher, Feed The Beast, Technic, and PackWiz
- **Content management** — per-instance management of mods, resource packs, data packs, shader packs, and texture packs
- **Java management** — automatic Java detection and installation for any Minecraft version
- **Game options** — configure JVM arguments, memory allocation, window size, and pre/post-launch commands
- **World & server tools** — manage saves and server entries from within the launcher
- **Screenshots** — browse screenshots and upload to Imgur directly
- **Export / import** — share instances as portable zip archives
- **Custom themes** — change the launcher appearance from the settings

## Requirements

| Component | Minimum |
|-----------|---------|
| OS | Windows 10, macOS 12, or a modern Linux distro |
| Java | Java 8+ (auto-detected or auto-installed) |
| Qt | 6.4+ (bundled in release builds) |
| RAM | 512 MB free for the launcher itself |

## Building from source

### Prerequisites

- CMake 3.25+
- Qt 6.4+ (Core, Widgets, Concurrent, Network, Xml, NetworkAuth, OpenGL)
- A C++20-capable compiler: MSVC 2022, GCC 12+, or Clang 15+
- vcpkg (dependencies declared in `vcpkg.json`)

### Clone and build

```bash
git clone https://github.com/xeodeo/xeolauncher.git
cd xeolauncher

# Configure (out-of-source build required)
cmake -B build -S "Codigo fuente/PrismLauncher-develop" \
      -DCMAKE_BUILD_TYPE=Release \
      -DLauncher_BUILD_PLATFORM=local

# Build
cmake --build build --config Release --parallel
```

On Windows with MSVC, use the CMake presets defined in `CMakePresets.json`:

```powershell
cmake --preset windows-release
cmake --build --preset windows-release
```

### vcpkg dependencies

The build automatically fetches these packages via vcpkg:

| Package | Purpose |
|---------|---------|
| libarchive | zip/tar extraction |
| libqrencode | QR code generation |
| cmark | Markdown rendering |
| tomlplusplus | TOML config parsing |
| zlib | Compression |
| vulkan-headers | Vulkan support |

## Project structure

```
Codigo fuente/PrismLauncher-develop/
├── launcher/
│   ├── minecraft/        # Auth, launch, assets, mods, updates
│   ├── modplatform/      # CurseForge, Modrinth, FTB, Technic, ATL, PackWiz
│   ├── ui/               # All Qt widgets, dialogs, and pages
│   ├── net/              # HTTP client and caching layer
│   ├── java/             # Java detection and management
│   └── launch/           # Task-based launch orchestration
└── CMakeLists.txt
```

## License

GPL-3.0-only — see [LICENSE](LICENSE) for the full text.  
Based on Prism Launcher, which is itself a fork of MultiMC.
