#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to number to change
 * @index: index  to change
 * Return: 1 if ok or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z;
	unsigned int keep;

	if (index > 64)
		return (-1);
	keep = index;

	for (z = 1; keep > 0; z *= 2, keep--)
		;

	if ((*n >> index) & 1)
		*n -= z;

	return (1);
}
