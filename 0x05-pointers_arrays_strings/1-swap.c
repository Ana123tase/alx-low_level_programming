#include "main.h"
#include <string.h>

/**
 * swap_int - function swaps the values of two integers.
 * @a: Integer to swap with
 * @b: Integer to swap with
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
