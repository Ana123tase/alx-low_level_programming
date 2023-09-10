#include <stdio.h>
/**
 * main - Print the alphabet
 * Return: 0;
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
