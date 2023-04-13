#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 *
 * Return: a pointer to the allocated memory.
 * if malloc fails, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int x, y, l, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (y = 0; s2[y] != '\0'; y++)
		;

	if (n > y)
		n = y;

	l = x + n;

	t = malloc(l + 1);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		if (i < l)
			t[i] = s1[i];
		else
			t[i] = s2[i + x];

	t[i] = '\0';

	return (t);
}
