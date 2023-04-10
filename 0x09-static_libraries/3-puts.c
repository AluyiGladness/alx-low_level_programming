#include "main.h"
/**
 * _puts - prints a string followed by a new line.
 *
 * Return: 0
 *@str: input string
 */
void _puts(char *str)
{
	int j = 0;

	while (str[j] != 0)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
