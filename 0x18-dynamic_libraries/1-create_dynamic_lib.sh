#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC -c *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
