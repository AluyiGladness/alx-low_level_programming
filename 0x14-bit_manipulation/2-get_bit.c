#include "main.h"
#include <stdio.h>
/**
 * get_bit - prints value of bit at a given index
 * @n: number to examine
 * @index: the index to prints its bit
 * Return: value of bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int keep;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	keep = n >> index;
	return (keep & 1);
}

