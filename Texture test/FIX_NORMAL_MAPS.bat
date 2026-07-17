@echo off
cd /d "%~dp0"
echo Corrigiendo _n _s _e y reempacando...
python fix_normal_maps.py
pause
