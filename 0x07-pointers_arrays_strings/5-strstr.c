#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be searched for
 * Return: a pointer to the beginning of the located substring or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack)
	{
		while (haystack[i] == needle[i])
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (NULL);
		}
		haystack = haystack + 1;
	}
	return ('\0');
}
