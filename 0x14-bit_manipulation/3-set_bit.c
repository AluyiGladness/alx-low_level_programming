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
	unsigned long int *keep;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	keep = 1ul << index;

	*n |= keep;

	return (1);
}

