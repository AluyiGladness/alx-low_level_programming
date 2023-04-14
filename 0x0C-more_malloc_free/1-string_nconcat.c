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
	unsigned int len1;
	unsigned int len2;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;
	t = malloc((len1 + n + 1) * sizeof(char));
	if (t == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		t[i] = s1[i];
		i++;
	}

	i = 0;
	while (i < n)
	{
		t[len1 + i] = s2[i];
		i++;
	}
	t[len1 + i] = '\0';
	return (t);
}
