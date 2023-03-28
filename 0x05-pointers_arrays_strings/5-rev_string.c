#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * rev_string - reverses string
 *
 *@s: character string to print
 *Return; 0
 */
void rev_string(char *s)
{
	int j;
	char k;

	for (j = 0; j < _strlen(s) / 2; j++)
	{
		k = s[j];
		s[j] = s[_strlen(s) - j - 1];
		s[_strlen(s) - j - 1] = k;
	}

}

