#include "main.h"
/**
 * power_operation - return the natural ootof 
 * a number
 * @n: input
 * @c: iterator
 * Return: Always 0
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > 4)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1);
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