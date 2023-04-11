#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars that are initialized with the char c
 * @size: array size
 * @c: char to initialize the array with
 * Return: returns char
 */

char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i;

	if (size <=0)
		return (NULL);

	k = malloc(sizeof(char) * size);
	if (k == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		k[i] = c;

	return (k);

}

