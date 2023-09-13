#include "main.h"
//This function prints the alphabet in lowercase


void print_alphabet(void) {
    char lette_ar = 'a';
    
    while (lette_ar <= 'z') {
        _putchar(lette_ar);
        lette_ar++;
    }
    
    _putchar('\n');
}

