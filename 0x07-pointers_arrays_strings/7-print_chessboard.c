#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the array to print
 * Return: nothing for now
 *
 */
void print_chessboard(char (*a)[8])
{
	int j = 0;
	int k;

	for (; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[j][k]);
		}
		_putchar ('\n');
	}
}
