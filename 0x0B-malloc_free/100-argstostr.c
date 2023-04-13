#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: points yo an array of char
 */
char *argstostr(int ac, char **av)
{
	char *t;
	int c, i, j, k;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	t = malloc((c + 1) * sizeof(char));

	if (t == NULL)
	{
		free(t);
		return (NULL);
	}

	for (i = j = k = 0; k < c; j++, k++)
	{
		if (av[i][j] == '\0')
		{
		t[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < c - 1)
			t[k] = av[i][j];
	}
	t[k] = '\0';

	return (t);
}
