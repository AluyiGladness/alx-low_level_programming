#include "main.h"
/**
 * _strpbrk - locates the first occurence of a char in a string
 * @s:  string to search
 * @accept: string being searched for
 *
 * Return: returns pointer to s that matches accept
 */
char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
		}

	}
	return (0);
}

