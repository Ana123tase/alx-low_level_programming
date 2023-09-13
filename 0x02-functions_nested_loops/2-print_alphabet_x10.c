#include "main.h"


void print_alphabet_x10(void) {
    int i;
    
    for (i = 0; i < 10; i++) {
        char lette_ar = 'a';
        
        while (lette_ar <= 'z') {
            _putchar(lette_ar);
            lette_ar++;
        }
        
        _putchar('\n');
    }
}

