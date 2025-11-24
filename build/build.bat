@echo off
gcc --version
cls
cd ..
gcc src/main/general.c src/main/main.c src/main/shapes.c -o ucf_c
move ucf_c.exe bin/