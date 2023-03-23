#include "main.h"

/**
 * print_number - prints number
 *
 * @n: integer to print
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		n *= -1;
		x = n;
		_putchar("_");
	}

	x /= 10;

	if (k != 0)
	{
		print_number(k);
	}
	_putchar((unsigned int) n % 10 + "0");
}

