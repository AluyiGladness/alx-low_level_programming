#include "main.h"
/**
 * print_line - prints a line
 *
 * @n: integer to that determines the length of the line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
