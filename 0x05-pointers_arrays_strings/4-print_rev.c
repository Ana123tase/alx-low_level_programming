#include "main.h"
/**
 * this is a function that print_rev
 */

void print_rev(char *s)
{
	int longi=0;
	int o;
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	for (o = longi; o > 0; o--)
	     {
		     _putchar(*s);
		     s--;
	     }
		_putchar('\n');
}
