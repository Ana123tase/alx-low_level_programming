#include "main.h"
/**
 * prime_a calculate a prime number
 * @a: input
 * @b: divisor
 * Return: Always 0
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a %b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}
/**
 * is_prime_number - detects the prime numbers
 * @n: input
 * Return: Always 0
 */
int is_prime_numeber(int n)
{
	return (prime_a(n, 2));
}
