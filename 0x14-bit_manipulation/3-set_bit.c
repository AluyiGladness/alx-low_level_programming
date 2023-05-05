#include <stdio.h>
#include "main.h"

/**
 * set_bit - set value of bit to 1 in a given index
 * @n: value of bit
 * @index: index to set
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int y;

	if (index > 64)
		return (-1);

	for (y = 1; index > 0; index--, y *= 2)
		;
	*n += y;

	return (1);
}

