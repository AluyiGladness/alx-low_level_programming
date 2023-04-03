#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: points to memory area that will be changed
 * @b: this is what we are setting the memory to
 * @n: n number of times to set
 * Return: will return the value of s of type char
 */
char *_memset(char *s, char b, unsigned int n)
{

	for (unsigned int x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);

}
