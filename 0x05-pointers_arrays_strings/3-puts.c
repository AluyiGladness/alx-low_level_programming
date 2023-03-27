#include "main.h"
/**
 * _puts - prints a string followed by a new line.
 *
 * Return: 0
 *@str: input string
 */
void _puts(char *str);
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
