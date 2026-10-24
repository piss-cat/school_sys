@echo off
cd /d "%~dp0\.."

gcc -Wall -Wextra -Wpedantic -Iinclude src/*.c -o build\output.exe

if %errorlevel% equ 0 (
    echo.
    build\output.exe
)

echo.
pause