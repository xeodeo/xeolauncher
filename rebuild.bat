@echo off
set QT_DIR=C:\Users\xeodeo\Desktop\MultiMC\buildenv\Qt
set QT_GCC=%QT_DIR%\Tools\mingw1310_64
set CMAKE=%QT_DIR%\Tools\CMake_64\bin\cmake.exe

if not exist "%QT_GCC%\bin\g++.exe" (
    echo Descargando MinGW 13.1.0 para Qt 6.7.3...
    python -m aqt install-tool windows desktop tools_mingw1310 --outputdir "%QT_DIR%"
    if errorlevel 1 (
        echo ERROR descargando MinGW
        pause
        exit /b 1
    )
)

set PATH=%QT_GCC%\bin;%QT_DIR%\Tools\CMake_64\bin;%PATH%

echo Compilando...
"%CMAKE%" --build "C:\Users\xeodeo\Desktop\MultiMC\Nuevo proyecto\build" --config Release > "%~dp0build_error.log" 2>&1
type "%~dp0build_error.log"
if errorlevel 1 (
    echo ERROR al compilar - ver build_error.log
    pause
    exit /b 1
)

echo Copiando exe...
copy /y "C:\Users\xeodeo\Desktop\MultiMC\Nuevo proyecto\build\Release\xeolauncher.exe" "C:\Users\xeodeo\Desktop\MultiMC\Nuevo proyecto\Compiled\xeolauncher\xeolauncher.exe"

echo Listo!
pause
