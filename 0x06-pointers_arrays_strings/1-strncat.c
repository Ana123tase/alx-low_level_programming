#include <stdio.h>
#include "main.h"

/**
 * _strncat - Concatenate two strings using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i;

    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + i] = '\0';

    return dest;
}

int main()
{
    char dest[50] = "Hello, ";
    char src[] = "world!";
    int n = 3;

    printf("Before concatenation: %s\n", dest);
    _strncat(dest, src, n);
    printf("After concatenation: %s\n", dest);

    return 0;
}
