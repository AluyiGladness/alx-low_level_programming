#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 *
 * Return: a pointer to the memory allocated
 * if malloc fails, termination value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}
