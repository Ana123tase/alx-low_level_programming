#include "main.h"

/**
 * _strncpy - Copies at most 'n' characters from 'src' to 'dest'.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to 'dest'.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++
	}
	return (dest);
}
