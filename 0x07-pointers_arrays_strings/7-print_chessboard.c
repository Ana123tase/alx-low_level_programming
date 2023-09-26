#include "main.h"
/**
 * _print_chessboard -Entry point
 * @a: array
 * Return: cAlways 0
 */
void print_chessboard(char (*a)[8])
{
	int q;
	int x;

	for (q = 0; q < 8; q++)
	{
		for (x = 0; x < 8; x++)
			_putchar(a[q][x]);
		_putchar('\n');
	}
}
