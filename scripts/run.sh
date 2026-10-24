#!/bin/bash

cd "$(dirname "$0")/.."

gcc -Wall -Wextra -Wpedantic -Iinclude src/*.c -o build/output

if [ $? -eq 0 ]; then
    echo ""
    ./build/output
fi

echo ""
read -p "Press Enter to exit..."