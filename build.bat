@echo off
echo === Build PrismLauncher ===

set ROOT=C:\Users\xeodeo\Desktop\MultiMC\Nuevo proyecto
set QT_DIR=%ROOT%\buildenv\Qt
set VCPKG_DIR=%ROOT%\buildenv\vcpkg
set LLVM_DIR=%ROOT%\buildenv\llvm-mingw
set GCC_DIR=C:\gcc
set QT_GCC=%QT_DIR%\Tools\mingw1310_64
set SOURCE=%ROOT%\Codigo fuente\PrismLauncher-develop
set BUILD=%ROOT%\build
set INSTALL=%ROOT%\Compiled\xeolauncher

set CMAKE=C:\Users\xeodeo\Desktop\MultiMC\buildenv\Qt\Tools\CMake_64\bin\cmake.exe
set QT6_PATH=%QT_DIR%\6.7.3\mingw_64
set NINJA=%ROOT%\buildenv\Qt\Tools\Ninja\ninja.exe

REM ===== 1. Qt 6.7.3 MinGW 64-bit =====
if not exist "%QT6_PATH%\bin\Qt6Core.dll" (
    echo Descargando Qt 6.7.3 MinGW 64-bit...
    python -m aqt install-qt windows desktop 6.7.3 win64_mingw --outputdir "%QT_DIR%" --modules qtnetworkauth
    if %ERRORLEVEL% NEQ 0 ( echo ERROR descargando Qt & pause & exit /b 1 )
) else (
    echo Qt 6.7.3 OK
)

REM ===== 2. LLVM-MinGW (para vcpkg) =====
if not exist "%LLVM_DIR%\bin\clang++.exe" (
    echo Descargando LLVM-MinGW...
    python "%ROOT%\download_llvm.py"
    if %ERRORLEVEL% NEQ 0 ( echo ERROR descargando LLVM-MinGW & pause & exit /b 1 )
) else (
    echo LLVM-MinGW OK
)

REM ===== 2b. GCC para vcpkg (winlibs, ya instalado en C:\gcc) =====
if not exist "%GCC_DIR%\bin\g++.exe" (
    echo Descargando GCC 13.x MinGW-w64 para vcpkg...
    python "%ROOT%\download_gcc.py"
    if %ERRORLEVEL% NEQ 0 ( echo ERROR descargando GCC & pause & exit /b 1 )
) else (
    echo GCC vcpkg OK
)

REM ===== 2c. GCC bundled de Qt 6.7.3 (para compilar PrismLauncher - mismo ABI) =====
if not exist "%QT_GCC%\bin\g++.exe" (
    echo Descargando MinGW GCC 13.1.0 - exacto de Qt 6.7.3...
    python -m aqt install-tool windows desktop tools_mingw1310 --outputdir "%QT_DIR%"
    if %ERRORLEVEL% NEQ 0 ( echo ERROR descargando MinGW bundled & pause & exit /b 1 )
) else (
    echo GCC Qt OK
)

REM ===== 3. Ninja =====
if not exist "%NINJA%" (
    echo Descargando Ninja...
    python -m aqt install-tool windows desktop tools_ninja --outputdir "%QT_DIR%"
    if %ERRORLEVEL% NEQ 0 ( echo ERROR descargando Ninja & pause & exit /b 1 )
) else (
    echo Ninja OK
)

REM ===== 4. vcpkg =====
if not exist "%VCPKG_DIR%\vcpkg.exe" (
    echo Configurando vcpkg...
    if not exist "%VCPKG_DIR%" git clone https://github.com/microsoft/vcpkg.git "%VCPKG_DIR%"
    call "%VCPKG_DIR%\bootstrap-vcpkg.bat" -disableMetrics
    if not exist "%VCPKG_DIR%\vcpkg.exe" ( echo ERROR en vcpkg & pause & exit /b 1 )
) else (
    echo vcpkg OK
)

REM ===== 4b. Submodulos del codigo fuente =====
if not exist "%SOURCE%\libraries\libnbtplusplus\CMakeLists.txt" (
    echo Clonando submodulo libnbtplusplus...
    git clone https://github.com/PrismLauncher/libnbtplusplus.git "%SOURCE%\libraries\libnbtplusplus"
    if %ERRORLEVEL% NEQ 0 ( echo ERROR clonando libnbtplusplus & pause & exit /b 1 )
) else (
    echo libnbtplusplus OK
)

REM ===== Entorno =====
REM LLVM en PATH solo para vcpkg; GCC tambien disponible
set PATH=%LLVM_DIR%\bin;%GCC_DIR%\bin;%ROOT%\buildenv\Qt\Tools\Ninja;%PATH%
set VCPKG_ROOT=%VCPKG_DIR%

REM ===== 5. Configurar CMake =====
REM Si existe CMakeCache pero no el build de Ninja, la config esta rota — limpiar
REM NOTA: si cambias el compilador, borra manualmente la carpeta build\
REM Si el cache tiene el nombre o install prefix viejo, forzar reconfigurar
if exist "%BUILD%\CMakeCache.txt" (
    findstr /C:"Launcher_APP_BINARY_NAME:STRING=prismlauncher" "%BUILD%\CMakeCache.txt" >nul 2>&1
    if not errorlevel 1 (
        echo Nombre binario desactualizado en cache, limpiando para reconfigurar...
        rmdir /s /q "%BUILD%"
    )
)
if exist "%BUILD%\CMakeCache.txt" (
    findstr /C:"PrismLauncher" "%BUILD%\CMakeCache.txt" >nul 2>&1
    if not errorlevel 1 (
        echo Install prefix desactualizado en cache, limpiando para reconfigurar...
        rmdir /s /q "%BUILD%"
    )
)
if exist "%BUILD%\CMakeCache.txt" (
    if not exist "%BUILD%\build-Release.ninja" (
        echo CMakeCache roto detectado, limpiando build...
        rmdir /s /q "%BUILD%"
    )
)
if not exist "%BUILD%\CMakeCache.txt" (
    echo Configurando CMake...
    "%CMAKE%" -S "%SOURCE%" -B "%BUILD%" ^
        -G "Ninja Multi-Config" ^
        -DCMAKE_C_COMPILER="%QT_GCC%\bin\gcc.exe" ^
        -DCMAKE_CXX_COMPILER="%QT_GCC%\bin\g++.exe" ^
        -DCMAKE_MAKE_PROGRAM="%NINJA%" ^
        -DCMAKE_PREFIX_PATH="%QT6_PATH%" ^
        -DCMAKE_INSTALL_PREFIX="%INSTALL%" ^
        -DCMAKE_TOOLCHAIN_FILE="%VCPKG_DIR%\scripts\buildsystems\vcpkg.cmake" ^
        -DVCPKG_OVERLAY_TRIPLETS="%ROOT%\vcpkg-triplets" ^
        -DVCPKG_TARGET_TRIPLET=x64-mingw-dynamic ^
        -DVCPKG_HOST_TRIPLET=x64-mingw-dynamic ^
        -DVCPKG_INSTALL_OPTIONS="--x-buildtrees-root=C:/vb;--x-packages-root=C:/vp" ^
        -DVCPKG_INSTALLED_DIR=C:/vp ^
        -DCMAKE_DISABLE_PRECOMPILE_HEADERS=ON ^
        -DLauncher_APP_BINARY_NAME=xeolauncher ^
        -DLauncher_MSA_CLIENT_ID="c36a9fb6-4f2a-41ff-90bd-ae7cc92031eb" ^
        -DLauncher_CURSEFORGE_API_KEY="$2a$10$wuAJuNZuted3NORVmpgUC.m8sI.pv1tOPKZyBgLFGjxFp/br0lZCC"
    if %ERRORLEVEL% NEQ 0 ( echo ERROR: CMake configure fallo & pause & exit /b 1 )
)

REM ===== 6. Compilar =====
echo Compilando...
"%CMAKE%" --build "%BUILD%" --config Release --parallel 8
if %ERRORLEVEL% NEQ 0 ( echo Build FALLIDO & pause & exit /b 1 )

REM ===== 7. Instalar =====
echo Instalando...
"%CMAKE%" --install "%BUILD%" --config Release
REM El install puede fallar por libqrencode.dll no encontrada — se copia abajo manualmente

REM ===== 8. Copiar DLLs de Qt =====
echo Copiando Qt6 DLLs...
for %%f in (Qt6Core Qt6Gui Qt6Widgets Qt6Network Qt6NetworkAuth Qt6Xml Qt6Svg Qt6OpenGL) do (
    copy /y "%QT6_PATH%\bin\%%f.dll" "%INSTALL%\" >nul
)
echo Copiando plugins Qt...
xcopy /s /y /i "%QT6_PATH%\plugins\platforms\"    "%INSTALL%\platforms\"    >nul
xcopy /s /y /i "%QT6_PATH%\plugins\imageformats\" "%INSTALL%\imageformats\" >nul
xcopy /s /y /i "%QT6_PATH%\plugins\iconengines\"  "%INSTALL%\iconengines\"  >nul
xcopy /s /y /i "%QT6_PATH%\plugins\tls\"          "%INSTALL%\tls\"          >nul
xcopy /s /y /i "%QT6_PATH%\plugins\styles\"       "%INSTALL%\styles\"       >nul
REM windeployqt como complemento (puede agregar DLLs extra que falten)
"%QT6_PATH%\bin\windeployqt.exe" --release --no-translations "%INSTALL%\xeolauncher.exe" >nul 2>&1

REM ===== 9. Copiar DLLs de runtime =====
echo Copiando DLLs runtime...
copy /y "%QT_GCC%\bin\libgcc_s_seh-1.dll"  "%INSTALL%\" 2>nul
copy /y "%QT_GCC%\bin\libstdc++-6.dll"     "%INSTALL%\" 2>nul
copy /y "%QT_GCC%\bin\libwinpthread-1.dll" "%INSTALL%\" 2>nul
copy /y "%QT6_PATH%\bin\libcrypto-3-x64.dll" "%INSTALL%\" 2>nul
copy /y "%QT6_PATH%\bin\libssl-3-x64.dll"    "%INSTALL%\" 2>nul
echo Copiando DLLs de vcpkg...
for %%f in ("C:\vp\x64-mingw-dynamic\bin\*.dll") do copy /y "%%f" "%INSTALL%\" 2>nul
for %%f in ("C:\vp\x64-mingw-dynamic\lib\*.dll") do copy /y "%%f" "%INSTALL%\" 2>nul

REM ===== 10. Copiar assets estaticos desde portable oficial =====
echo Copiando assets estaticos...
set APPREF=%ROOT%\app\PrismLauncher-Windows-MinGW-w64-Portable-11.0.2
xcopy /s /y /i "%APPREF%\icons\"       "%INSTALL%\icons\"       >nul 2>&1
xcopy /s /y /i "%APPREF%\iconthemes\"  "%INSTALL%\iconthemes\"  >nul 2>&1
xcopy /s /y /i "%APPREF%\themes\"      "%INSTALL%\themes\"      >nul 2>&1
xcopy /s /y /i "%APPREF%\translations\" "%INSTALL%\translations\" >nul 2>&1
xcopy /s /y /i "%APPREF%\catpacks\"    "%INSTALL%\catpacks\"    >nul 2>&1
xcopy /s /y /i "%APPREF%\styles\"      "%INSTALL%\styles\"      >nul 2>&1
if exist "%APPREF%\qt.conf"      copy /y "%APPREF%\qt.conf"      "%INSTALL%\" >nul
if exist "%APPREF%\portable.txt" copy /y "%APPREF%\portable.txt" "%INSTALL%\" >nul

REM ===== 12. Crear ZIP =====
echo Creando PrismLauncher-xeo.zip...
set ZIPFILE=%ROOT%\PrismLauncher-xeo.zip
if exist "%ZIPFILE%" del "%ZIPFILE%"
powershell -NoProfile -NonInteractive -Command "$ProgressPreference='SilentlyContinue'; Compress-Archive -Path '%INSTALL%' -DestinationPath '%ZIPFILE%' -Force"
echo ZIP creado: %ZIPFILE%

echo.
echo === Listo. Ejecuta %INSTALL%\xeolauncher.exe ===
pause
