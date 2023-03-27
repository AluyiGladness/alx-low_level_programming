#include "main.h"
/**
 * _puts - prints a string followed by a new line.
 *
 * Return: 0
 *@str: input string
 */
void _puts(char *str)
{
	int u;

	for (u = 0; *(str + u) != '\0'; u++)
	{
		_putchar((str + u));
	}
	_putchar('\n');
}
