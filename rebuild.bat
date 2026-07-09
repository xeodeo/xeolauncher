@echo off
set "ROOT=%~dp0"
if "%ROOT:~-1%"=="\" set "ROOT=%ROOT:~0,-1%"

set QT_DIR=%ROOT%\buildenv\Qt
set QT_GCC=%QT_DIR%\Tools\mingw1310_64
set CMAKE=%QT_DIR%\Tools\CMake_64\bin\cmake.exe
set BUILD=%ROOT%\build
set INSTALL=%ROOT%\Compiled\xeolauncher

if not exist "%CMAKE%" (
    echo Descargando CMake...
    python -m aqt install-tool windows desktop tools_cmake --outputdir "%QT_DIR%"
    if errorlevel 1 ( echo ERROR descargando CMake & pause & exit /b 1 )
)

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
"%CMAKE%" --build "%BUILD%" --config Release > "%ROOT%\build_error.log" 2>&1
type "%ROOT%\build_error.log"
if errorlevel 1 (
    echo ERROR al compilar - ver build_error.log
    pause
    exit /b 1
)

echo Copiando exe...
copy /y "%BUILD%\Release\xeolauncher.exe" "%INSTALL%\xeolauncher.exe"

echo Listo!
pause
