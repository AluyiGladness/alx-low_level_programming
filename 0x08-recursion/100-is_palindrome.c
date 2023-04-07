#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_to - compares each character of the string.
 * @s: string
 * @x: iterator 1.
 * @y: iterator 2.
 * Return: .
 */
int compare_to(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 1)
			return (1);
		return (0 + compare_to(s, x + 1, y - 1));
	}
	return (0);
}
/**
 * is_palindrome - examine a string to see if it is a palindrome.
 * @s: string.
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_to(s, 0, _strlen_recursion(s) - 1));
}
