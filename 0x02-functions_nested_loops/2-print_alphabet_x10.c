#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet of lower case 10 times
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar(i);
	}
	_putchar('\n');

}

