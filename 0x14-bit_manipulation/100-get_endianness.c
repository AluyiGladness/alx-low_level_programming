#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 otherwise
 */
int get_endianness(void)
{
	int j;

	j = 1;
	if (*(char *)&j == 1)
		return (1);
	else
		return (0);
}

