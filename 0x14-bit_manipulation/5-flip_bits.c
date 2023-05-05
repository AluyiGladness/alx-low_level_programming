#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits
 * @n: first number
 * @m: second number to flip to
 * Return: number of bits that was needed to flip to
 * switch between numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	int counter;

	xor = n ^ m;
	counter = 0;

	while (xor)
	{
		counter++;
		xor &= (xor - 1);
	}

	return (counter);
}

