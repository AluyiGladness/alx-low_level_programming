#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 *
 * @s: parameter required by the function, this is recursed through
 *
 */
void _puts_recursion(char *s)
{
	if (!(*s))
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}

}
