#!bin/bash
gcc -Wall -shared -fPIC -Wl,-soname,liball.so -o liball.so *.c
