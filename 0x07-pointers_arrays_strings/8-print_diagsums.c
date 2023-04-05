#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals
 * @a: array of numbers
 * @size: size of diagonals
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagonalx = 0;
	int diagonaly = 0;

	for (i = 0; i < size; i++)
	{
		diagonalx = diagonalx + a[(i*size) + i];
		diagonaly = diagonaly + a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diagonalx, diagonaly);
}



