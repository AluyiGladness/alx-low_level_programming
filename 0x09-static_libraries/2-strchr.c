#include "main.h"
#include <stddef.h>
/**
 * _strchr - it locates a character in a string
 * @s: string  to be searched
 * @c: character to be located
 * Return: returns a pointer to the first occurrence of a character
 *
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	if (s[x] == c)
		return (s +x);
	return (s + x);
}

