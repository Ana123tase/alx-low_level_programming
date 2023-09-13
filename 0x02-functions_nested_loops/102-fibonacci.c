#include "main.h"

int main(void)
{
    int n1 = 1;
    int n2 = 2;
    int i;
    
    printf("%d, %d, ", n1, n2);
    
    for (i = 3; i <= 50; i++) {
        int next = n1 + n2;
        printf("%d, ", next);
        n1 = n2;
        n2 = next;
    }
    
    printf("\n");
    
    return 0;
}

