# xeolauncher v12.0.0

> First public release of xeolauncher — a custom Minecraft launcher built on Prism Launcher.

## Download

| Platform | File |
|----------|------|
| Windows (x64) | `xeolauncher-12.0.0-win64.zip` |
| Linux (x64) | `xeolauncher-12.0.0-linux64.tar.gz` |
| macOS (Universal) | `xeolauncher-12.0.0-macos.dmg` |

> **Note:** Release binaries are not yet published. Build from source using the instructions in [README.md](README.md).

## System requirements

- **Windows:** Windows 10 or later (64-bit)
- **Linux:** glibc 2.31+, X11 or Wayland
- **macOS:** macOS 12 Monterey or later
- **Java:** Automatically detected or installed. Java 8 required for older Minecraft versions; Java 21 recommended for 1.21+.
- **Memory:** 512 MB free for the launcher; allocate additional RAM per-instance as needed.

## What's included

### Instance management
- Create, duplicate, and delete Minecraft instances independently
- Per-instance Java version and memory settings
- Pre-launch and post-exit command hooks

### Account support
- Microsoft/Xbox Live authentication (full online play)
- Offline mode for LAN and mod testing

### Mod platform integrations
- **CurseForge** — search and install mods, resource packs, and modpacks
- **Modrinth** — full mod/modpack browsing and install
- **ATLauncher** — import and run ATLauncher packs
- **Feed The Beast (FTB)** — browse and launch FTB modpacks
- **Technic** — Technic Platform modpack support
- **PackWiz** — development-friendly pack format support

### Content management (per instance)
- Mods (enable/disable/delete without touching game files)
- Resource packs
- Data packs
- Shader packs
- Texture packs

### Other
- Automatic Java detection and optional auto-install
- Screenshot browser with Imgur upload
- World and server list management
- Instance export/import as zip archives
- Custom launcher themes

## Known issues

- No binary release yet — build from source as described in [README.md](README.md).
- macOS code signing not configured; Gatekeeper may require manual approval on first launch.

## Building this release

```bash
git clone https://github.com/xeodeo/xeolauncher.git
cd xeolauncher
cmake -B build -S "Codigo fuente/PrismLauncher-develop" \
      -DCMAKE_BUILD_TYPE=Release \
      -DLauncher_BUILD_PLATFORM=local
cmake --build build --config Release --parallel
```

See [README.md](README.md) for full prerequisites and platform-specific instructions.

## License

GPL-3.0-only. Source code available at https://github.com/xeodeo/xeolauncher.  
Based on [Prism Launcher](https://prismlauncher.org/) and [MultiMC](https://multimc.org/).
