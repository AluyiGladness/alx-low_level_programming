#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to search
 * @accept: array with it elements present in s
 *
 * Return: returns bytes in the initial segment of s which is also in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	unsigned int count = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				count++;
				break;
			}
		}
		if (s[y] == '\0')
		{
			return (count);
		}
	}
	return (count);

}

