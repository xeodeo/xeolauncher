@echo off
chcp 65001 >nul 2>&1

set "ROOT=%~dp0"
if "%ROOT:~-1%"=="\" set "ROOT=%ROOT:~0,-1%"

set "QT_DIR=%ROOT%\buildenv\Qt"
set "VCPKG_DIR=%ROOT%\buildenv\vcpkg"
set "LLVM_DIR=%ROOT%\buildenv\llvm-mingw"
set "GCC_DIR=%ROOT%\buildenv\gcc"
set "QT_GCC=%QT_DIR%\Tools\mingw1310_64"
set "SOURCE=%ROOT%\Codigo fuente\PrismLauncher-develop"
set "BUILD=%ROOT%\build"
set "INSTALL=%ROOT%\Compiled\xeolauncher"
set "CMAKE=%QT_DIR%\Tools\CMake_64\bin\cmake.exe"
set "QT6_PATH=%QT_DIR%\6.7.3\mingw_64"
set "NINJA=%QT_DIR%\Tools\Ninja\ninja.exe"
set "APPREF=%ROOT%\app\PrismLauncher-Windows-MinGW-w64-Portable-11.0.2"
set "ZIPFILE=%ROOT%\PrismLauncher-xeo.zip"

:MENU
cls
echo.
echo  =========================================
echo   XeoLauncher Build Script v12
echo  =========================================
echo.
echo   [1] Compilar  (usa build existente si hay)
echo   [2] Build limpio  (borra build + compila)
echo   [3] Solo borrar carpeta build
echo   [4] Salir
echo.
set /p OPCION=" Elige una opcion [1-4]: "

if "%OPCION%"=="1" goto DEPS
if "%OPCION%"=="2" goto CLEAN_BUILD
if "%OPCION%"=="3" goto CLEAN_ONLY
if "%OPCION%"=="4" goto END
echo  Opcion invalida.
timeout /t 1 >nul
goto MENU

:CLEAN_ONLY
echo.
if exist "%BUILD%" (
    echo  Borrando build...
    rd /s /q "%BUILD%"
    echo  [OK] Carpeta build eliminada.
) else (
    echo  [OK] No existia carpeta build.
)
echo.
pause
goto MENU

:CLEAN_BUILD
if exist "%BUILD%" (
    echo  Borrando build anterior...
    rd /s /q "%BUILD%"
    echo  [OK] Build borrado.
)
if exist "%INSTALL%" (
    echo  Borrando Compiled\xeolauncher...
    rd /s /q "%INSTALL%"
    echo  [OK] Compiled borrado.
)
echo.
goto DEPS

:DEPS
set TOTAL=12
set STEP=0

echo.
echo  =========================================
echo   Verificando dependencias...
echo  =========================================
echo.

set /a STEP+=1
if not exist "%QT6_PATH%\bin\Qt6Core.dll" (
    echo  [%STEP%/%TOTAL%] Qt 6.7.3 - descargando ~1.5 GB...
    python -m aqt install-qt windows desktop 6.7.3 win64_mingw --outputdir "%QT_DIR%" --modules qtnetworkauth
    if errorlevel 1 ( echo  [ERROR] Qt & pause & exit /b 1 )
    echo  [OK]
) else ( echo  [%STEP%/%TOTAL%] Qt 6.7.3 - ya instalado )

set /a STEP+=1
if not exist "%LLVM_DIR%\bin\clang++.exe" (
    echo  [%STEP%/%TOTAL%] LLVM-MinGW - descargando ~200 MB...
    python "%ROOT%\download_llvm.py"
    if errorlevel 1 ( echo  [ERROR] LLVM & pause & exit /b 1 )
    echo  [OK]
) else ( echo  [%STEP%/%TOTAL%] LLVM-MinGW - ya instalado )

set /a STEP+=1
if not exist "%GCC_DIR%\bin\g++.exe" (
    echo  [%STEP%/%TOTAL%] GCC 13.x - descargando ~120 MB...
    python "%ROOT%\download_gcc.py"
    if errorlevel 1 ( echo  [ERROR] GCC & pause & exit /b 1 )
    echo  [OK]
) else ( echo  [%STEP%/%TOTAL%] GCC 13.x - ya instalado )

set /a STEP+=1
if not exist "%QT_GCC%\bin\g++.exe" (
    echo  [%STEP%/%TOTAL%] MinGW bundle - descargando...
    python -m aqt install-tool windows desktop tools_mingw1310 --outputdir "%QT_DIR%"
    if errorlevel 1 ( echo  [ERROR] MinGW & pause & exit /b 1 )
    echo  [OK]
) else ( echo  [%STEP%/%TOTAL%] MinGW bundle - ya instalado )

set /a STEP+=1
if not exist "%CMAKE%" (
    echo  [%STEP%/%TOTAL%] CMake - descargando...
    python -m aqt install-tool windows desktop tools_cmake --outputdir "%QT_DIR%"
    if errorlevel 1 ( echo  [ERROR] CMake & pause & exit /b 1 )
    echo  [OK]
) else ( echo  [%STEP%/%TOTAL%] CMake - ya instalado )

set /a STEP+=1
if not exist "%NINJA%" (
    echo  [%STEP%/%TOTAL%] Ninja - descargando...
    python -m aqt install-tool windows desktop tools_ninja --outputdir "%QT_DIR%"
    if errorlevel 1 ( echo  [ERROR] Ninja & pause & exit /b 1 )
    echo  [OK]
) else ( echo  [%STEP%/%TOTAL%] Ninja - ya instalado )

set /a STEP+=1
if not exist "%VCPKG_DIR%\vcpkg.exe" (
    echo  [%STEP%/%TOTAL%] vcpkg - clonando...
    if not exist "%VCPKG_DIR%" git clone https://github.com/microsoft/vcpkg.git "%VCPKG_DIR%"
    call "%VCPKG_DIR%\bootstrap-vcpkg.bat" -disableMetrics
    if not exist "%VCPKG_DIR%\vcpkg.exe" ( echo  [ERROR] vcpkg & pause & exit /b 1 )
    echo  [OK]
) else ( echo  [%STEP%/%TOTAL%] vcpkg - ya instalado )

set /a STEP+=1
if not exist "%SOURCE%\libraries\libnbtplusplus\CMakeLists.txt" (
    echo  [%STEP%/%TOTAL%] libnbtplusplus - clonando...
    git clone https://github.com/PrismLauncher/libnbtplusplus.git "%SOURCE%\libraries\libnbtplusplus"
    if errorlevel 1 ( echo  [ERROR] libnbtplusplus & pause & exit /b 1 )
    echo  [OK]
) else ( echo  [%STEP%/%TOTAL%] libnbtplusplus - ya instalado )

set "PATH=%LLVM_DIR%\bin;%GCC_DIR%\bin;%QT_DIR%\Tools\Ninja;%PATH%"
set "VCPKG_ROOT=%VCPKG_DIR%"

set /a STEP+=1
if exist "%BUILD%\CMakeCache.txt" (
    findstr /C:"Launcher_APP_BINARY_NAME:STRING=prismlauncher" "%BUILD%\CMakeCache.txt" >nul 2>&1
    if not errorlevel 1 (
        echo  [!] Cache viejo detectado - limpiando...
        rd /s /q "%BUILD%"
    )
)
if not exist "%BUILD%\CMakeCache.txt" (
    echo  [%STEP%/%TOTAL%] CMake configure - puede tardar 15-20 min la primera vez...
    "%CMAKE%" -S "%SOURCE%" -B "%BUILD%" -G "Ninja Multi-Config" -DCMAKE_C_COMPILER="%QT_GCC%\bin\gcc.exe" -DCMAKE_CXX_COMPILER="%QT_GCC%\bin\g++.exe" -DCMAKE_MAKE_PROGRAM="%NINJA%" -DCMAKE_PREFIX_PATH="%QT6_PATH%" -DCMAKE_INSTALL_PREFIX="%INSTALL%" -DCMAKE_TOOLCHAIN_FILE="%VCPKG_DIR%\scripts\buildsystems\vcpkg.cmake" -DVCPKG_OVERLAY_TRIPLETS="%ROOT%\vcpkg-triplets" -DVCPKG_TARGET_TRIPLET=x64-mingw-dynamic -DVCPKG_HOST_TRIPLET=x64-mingw-dynamic "-DVCPKG_INSTALL_OPTIONS=--x-buildtrees-root=%SystemDrive%/vb;--x-packages-root=%SystemDrive%/vp" -DVCPKG_INSTALLED_DIR=%SystemDrive%/vp -DCMAKE_DISABLE_PRECOMPILE_HEADERS=ON -DBUILD_TESTING=OFF -DLauncher_APP_BINARY_NAME=xeolauncher "-DLauncher_MSA_CLIENT_ID=c36a9fb6-4f2a-41ff-90bd-ae7cc92031eb" "-DLauncher_CURSEFORGE_API_KEY=$2a$10$wuAJuNZuted3NORVmpgUC.m8sI.pv1tOPKZyBgLFGjxFp/br0lZCC"
    if errorlevel 1 ( echo  [ERROR] CMake configure & pause & exit /b 1 )
    echo  [OK]
) else ( echo  [%STEP%/%TOTAL%] CMake configure - cache existente )

set /a STEP+=1
echo  [%STEP%/%TOTAL%] Compilando xeolauncher...
set BUILD_START=%TIME%
"%CMAKE%" --build "%BUILD%" --config Release --parallel 8
if errorlevel 1 ( echo  [ERROR] Compilacion fallida & pause & exit /b 1 )
echo  [OK] inicio: %BUILD_START%  fin: %TIME%

set /a STEP+=1
echo  [%STEP%/%TOTAL%] Instalando binario y Qt bundle...
"%CMAKE%" --install "%BUILD%" --config Release >nul 2>&1
echo  [OK]

set /a STEP+=1
echo  [%STEP%/%TOTAL%] Copiando DLLs y assets...
for %%f in (Qt6Core Qt6Gui Qt6Widgets Qt6Network Qt6NetworkAuth Qt6Xml Qt6Svg Qt6OpenGL) do copy /y "%QT6_PATH%\bin\%%f.dll" "%INSTALL%\" >nul
xcopy /s /y /i "%QT6_PATH%\plugins\platforms\"    "%INSTALL%\platforms\"    >nul
xcopy /s /y /i "%QT6_PATH%\plugins\imageformats\" "%INSTALL%\imageformats\" >nul
xcopy /s /y /i "%QT6_PATH%\plugins\iconengines\"  "%INSTALL%\iconengines\"  >nul
xcopy /s /y /i "%QT6_PATH%\plugins\tls\"          "%INSTALL%\tls\"          >nul
xcopy /s /y /i "%QT6_PATH%\plugins\styles\"       "%INSTALL%\styles\"       >nul
"%QT6_PATH%\bin\windeployqt.exe" --release --no-translations "%INSTALL%\xeolauncher.exe" >nul 2>&1
copy /y "%QT_GCC%\bin\libgcc_s_seh-1.dll"        "%INSTALL%\" >nul 2>&1
copy /y "%QT_GCC%\bin\libstdc++-6.dll"            "%INSTALL%\" >nul 2>&1
copy /y "%QT_GCC%\bin\libwinpthread-1.dll"        "%INSTALL%\" >nul 2>&1
copy /y "%QT_GCC%\opt\bin\libcrypto-1_1-x64.dll" "%INSTALL%\" >nul 2>&1
copy /y "%QT_GCC%\opt\bin\libssl-1_1-x64.dll"    "%INSTALL%\" >nul 2>&1
copy /y "%QT6_PATH%\bin\d3dcompiler_47.dll"       "%INSTALL%\" >nul 2>&1
for %%f in ("%SystemDrive%\vp\x64-mingw-dynamic\bin\*.dll") do copy /y "%%f" "%INSTALL%\" >nul 2>&1
for %%f in ("%SystemDrive%\vp\x64-mingw-dynamic\debug\bin\*.dll") do copy /y "%%f" "%INSTALL%\" >nul 2>&1
for %%f in ("%SystemDrive%\vp\x64-mingw-dynamic\lib\*.dll") do copy /y "%%f" "%INSTALL%\" >nul 2>&1
xcopy /s /y /i "%APPREF%\icons\"        "%INSTALL%\icons\"        >nul 2>&1
xcopy /s /y /i "%APPREF%\iconthemes\"   "%INSTALL%\iconthemes\"   >nul 2>&1
xcopy /s /y /i "%APPREF%\themes\"       "%INSTALL%\themes\"       >nul 2>&1
xcopy /s /y /i "%APPREF%\translations\" "%INSTALL%\translations\" >nul 2>&1
xcopy /s /y /i "%APPREF%\styles\"       "%INSTALL%\styles\"       >nul 2>&1
if exist "%APPREF%\qt.conf" copy /y "%APPREF%\qt.conf" "%INSTALL%\" >nul
taskkill /f /im xeolauncher.exe >nul 2>&1
if exist "%ZIPFILE%" del "%ZIPFILE%"
if exist "%INSTALL%\data" ren "%INSTALL%\data" "_data_zip_tmp_"
powershell -NoProfile -NonInteractive -Command "$ProgressPreference='SilentlyContinue'; Compress-Archive -Path '%INSTALL%' -DestinationPath '%ZIPFILE%' -Force"
if exist "%INSTALL%\_data_zip_tmp_" ren "%INSTALL%\_data_zip_tmp_" "data"
if errorlevel 1 ( echo  [ERROR] ZIP fallido - cierra xeolauncher.exe y reintenta & pause & exit /b 1 )
echo  [OK]

echo.
echo  =========================================
echo   BUILD COMPLETADO - %TIME%
echo  =========================================
echo   Exe: %INSTALL%\xeolauncher.exe
echo   ZIP: %ZIPFILE%
echo.
pause
goto MENU

:END
