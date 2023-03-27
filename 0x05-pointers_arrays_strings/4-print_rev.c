#include <stdio.h>
#include "2-strlen.c"

/**
 * print_rev - this reverses a string
 *
 * @s: string to print
 *
 */
void print_rev(char *s)
{
	int j;

	for (j = _strlens(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
