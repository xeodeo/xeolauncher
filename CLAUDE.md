# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project overview

**xeolauncher** is a custom Minecraft launcher (v12.0.0) forked from [Prism Launcher](https://prismlauncher.org/), which is itself a fork of MultiMC. The launcher manages multiple independent Minecraft instances with full mod platform support (CurseForge, Modrinth, ATLauncher, FTB, Technic, PackWiz).

The actual C++ source lives under `Codigo fuente/PrismLauncher-develop/`. The root of the repo contains Windows build tooling (`build.bat`, `rebuild.bat`) and output directories.

## Build system

### Full build (Windows, first time or clean)

Run `build.bat` from the repo root. It:
1. Downloads Qt 6.7.3 MinGW 64-bit via `aqt` if missing
2. Downloads LLVM-MinGW and GCC 13 via helper Python scripts if missing
3. Bootstraps vcpkg if missing
4. Configures CMake with `Ninja Multi-Config` generator
5. Compiles, installs, copies all DLLs/plugins/assets, and zips to `PrismLauncher-xeo.zip`

### Incremental rebuild (already configured)

```bat
rebuild.bat
```

This just re-runs `cmake --build` and copies the `.exe` to `Compiled\xeolauncher\`.

### Manual CMake configure (out-of-source, required)

```bat
cmake -S "Codigo fuente/PrismLauncher-develop" -B build ^
  -G "Ninja Multi-Config" ^
  -DCMAKE_C_COMPILER="<Qt_GCC>/bin/gcc.exe" ^
  -DCMAKE_CXX_COMPILER="<Qt_GCC>/bin/g++.exe" ^
  -DCMAKE_PREFIX_PATH="<Qt6_path>" ^
  -DCMAKE_TOOLCHAIN_FILE="<vcpkg>/scripts/buildsystems/vcpkg.cmake" ^
  -DVCPKG_TARGET_TRIPLET=x64-mingw-dynamic ^
  -DLauncher_APP_BINARY_NAME=xeolauncher
```

In-source builds are explicitly blocked by the root `CMakeLists.txt`.

### Build configuration

Key CMake variables (set in `build.bat` and root `CMakeLists.txt`):

| Variable | Purpose |
|---|---|
| `Launcher_APP_BINARY_NAME` | Output binary name (`xeolauncher`) |
| `Launcher_MSA_CLIENT_ID` | Microsoft OAuth client ID |
| `Launcher_CURSEFORGE_API_KEY` | CurseForge API key |
| `Launcher_BUILD_PLATFORM` | Shown in About dialog |
| `BUILD_TESTING` | Build test executables (default ON) |

### Run tests

After building, run all tests:
```bat
ctest --test-dir build --config Release
```

Run a single test by name (e.g., `FileSystem`):
```bat
build\Release\FileSystem.exe
```

Test executables are built from `Codigo fuente/PrismLauncher-develop/tests/` and link against `Launcher_logic`.

## Source architecture

All meaningful C++ code is under `Codigo fuente/PrismLauncher-develop/`:

```
launcher/               Main application library (Launcher_logic)
  Application.h/.cpp    QApplication singleton — global state, settings, managers
  minecraft/            Minecraft-specific: auth, assets, component system, launch steps
    auth/               Microsoft/Xbox Live OAuth flow (step-based AuthFlow)
    launch/             Minecraft-specific LaunchStep implementations
    Component.h         Version component model (Forge, Fabric, Quilt, etc.)
  modplatform/          One subdirectory per platform: flame/, modrinth/, atlauncher/,
                        ftb/, technic/, packwiz/, legacy_ftb/, import_ftb/
  launch/               Generic task-based launch orchestration (LaunchTask, LaunchStep)
  net/                  HTTP client, caching, download tasks
  java/                 Java detection, version parsing, auto-download
  ui/                   All Qt widgets, dialogs, pages (MainWindow, InstanceWindow, etc.)
  meta/                 Version metadata fetched from meta.prismlauncher.org
  icons/                Icon management (IconList, MMCIcon)
  logs/                 Log parsing, anonymization
libraries/
  libnbtplusplus/       NBT file parsing (Minecraft world data)
  launcher/             Java-based launcher shim (JAR)
  javacheck/            Java compatibility checker (JAR)
  LocalPeer/            Single-instance enforcement
  murmur2/              Hash for CurseForge API fingerprinting
  rainbow/              Qt color utilities
  qdcss/                CSS parser for theming
buildconfig/            Generates BuildConfig.cpp from CMake variables at configure time
tests/                  Qt Test framework tests — one .cpp per test name
```

### Key design patterns

- **Task system**: Async operations inherit from `Task` (in `launcher/tasks/`). `LaunchTask` chains `LaunchStep` objects; each step emits signals on completion/failure.
- **Component system**: A Minecraft instance's version stack (vanilla + modloader + libraries) is managed as a list of `Component` objects. `ComponentUpdateTask` resolves and downloads them.
- **Application singleton**: `APPLICATION` macro exposes the global `Application*`. Settings, account list, instance list, icon list, and the HTTP network manager all live here.
- **BuildConfig**: All compile-time strings (version, API keys, URLs) are baked in via `buildconfig/BuildConfig.cpp.in` → `BuildConfig.h`.

### vcpkg dependencies (auto-fetched)

`libarchive`, `libqrencode`, `cmark`, `tomlplusplus`, `zlib`, `vulkan-headers`

Triplet used: `x64-mingw-dynamic` (custom, defined in `vcpkg-triplets/`). Packages install to `C:/vp` to avoid long-path issues.

## Output

- Compiled launcher: `Compiled\xeolauncher\xeolauncher.exe`
- Distributable zip: `PrismLauncher-xeo.zip`
- Static assets (icons, themes, translations) are copied from `app\PrismLauncher-Windows-MinGW-w64-Portable-11.0.2\` — this reference directory must exist for a complete build.
