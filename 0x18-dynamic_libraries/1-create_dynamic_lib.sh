#!/bin/bash

# Compile all source files to object files
gcc -fPIC -c *.c

#Create the dynamic library, excluding the file with the 'main' function
gcc -shared -o liball.so $(ls *.o | grep -v 'main.o')
