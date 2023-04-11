#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - points to a memory space with duplicate of its parameter
 * @str: string parameter
 * Return: returns copy of str
 */
char *_strdup(char *str)
{
	int i;
	int size = 0;
	char *x;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	x = malloc(sizeof(char) * size + 1);

	if (x == NULL)
		return (NULL);

	for (i = 0; i <  size; i++)
		x[i] = str[i];

	return (x);

}
