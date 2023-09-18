#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 * Return: void
 */
void swap_int(int *c, int *d)
{
	 int temp;
	if (c != NULL && d != NULL)
	{
	temp = *c;
	*c = *d
	*d = temp;
	}
}
