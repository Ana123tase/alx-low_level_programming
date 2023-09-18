#include "main.h"
/**
 * try to find what this function do
 */

void rev_string(char *s)
{
	char rev = s[o];
	int c = 0;
	int i;
	while (s[c] != '\0')
		c++;
	for (i = 0 i < c; i++)
	{
		c--;
		rev = s[i];
		s[c] = rev;
	}
}
