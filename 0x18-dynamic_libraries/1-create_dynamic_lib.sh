#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so $(ls *.o | grep -v 'main.o')
