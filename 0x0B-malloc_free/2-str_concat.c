#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new memory block of s1 followed by s2
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int l1;
	int l2;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = 0;
	while (s1[l1] != '\0')
		l1++;
	l2 = 0;
	while (s2[l2] != '\0')
		l2++;
	l2++;
	c = malloc((l1 + l2) * sizeof(char));
	if (c == 0)
		return (0);

	i = 0;
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}

	i = 0;
	while (s2[i] != '\0')
	{
		c[l1 + i] = s2[i];
		i++;
	}
	c[l1 + i] = '\0';
	return (c);
}
