#include "main.h"
/**
 * _memcpy - copies n bytes from a memory location to another memory location
 * @dest: memory location to copy to
 * @src: memory location to copy from
 * @n: number of times to copy
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);

}
