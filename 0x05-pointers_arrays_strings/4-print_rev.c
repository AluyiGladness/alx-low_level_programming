#include <stdio.h>
#include "2-strlen.c"
#include "main.h"
/**
 * print_rev - this reverses a string
 *
 * @s: string to print
 *
 */
void print_rev(char *s)
{
	int j;

	for (j = _strlen(s) - 1; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
