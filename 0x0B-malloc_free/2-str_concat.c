#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int x;
	int y;
	char *t;

	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		s1[x] = s2[y];
		x++;
		y++;
		t = malloc(sizeof(char) * (x + y + 1));
		t = s1[x]; 
	}

	if (t == NULL)
	{
		free(t);
		return (NULL);
	}

	return (t);

}





