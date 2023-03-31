#include "main.h"
/**
 * _strncat -this concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: amount of times to append
 *
 * Return: char value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	for (k = 0; dest[k] != '\0'; k++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[k + i] = src[i];
	}
	dest[k + i] = '\0';

	return (dest);

}
