#include <stdio.h>
#include "main.h"

int main(void)
{
    int n1 = 1;
    int n2 = 2;
    int sum = 0;
    
    while (n1 <= 4000000) {
        if (n1 % 2 == 0) {
            sum += n1;
        }

