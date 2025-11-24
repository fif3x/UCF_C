#!/bin/bash

cd ..
gcc src/main/general.c src/main/main.c src/main/shapes.c -o ucf_c
mv ucf_c bin
cd bin
./ucf_c