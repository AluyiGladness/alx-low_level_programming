#include <stdio.h>

/**
 *swap_int - swap the values of two integers
 *@a: first integer
 *@b: second integer
 *Return: 0
 */
void swap_int(int *a, int *b)
{
	int swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}
