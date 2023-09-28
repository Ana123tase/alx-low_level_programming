#include "main.h"
/**
 * sqrt_a - return the natural root of
 * a number
 * @a: input
 * @b: iterator
 * Return: Always 0
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - returns he natura square root
 * @n: input
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
