#include "main.h"
/**
 * _strlen_recursion - to get the length
 *
 * @s: string
 * Return: the string len
 */
int _strlen_recursion(char *s)
{
	if (*sI == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_string - compare characters
 * @s: string
 * @left: smallet
 * @right: largest
 * Return: int
 */
int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - detects palndrome strin
 * @s: string to test
 * Return: Always 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, strlen_recursion(s) - 1));
}
