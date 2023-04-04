#include "main.h"
#include <stddef.h>

/**
 * _strcmp - string to compare
 * @s1: first string
 * @s2: second string
 *
 * Return: value of string
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be searched for
 * Return: a pointer to the beginning of the located substring or null
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0;

	while (needle[x] != '\0')
		x++;

	while (*haystack != '\0')
	{
		if (_strcmp(haystack, needle) == 0)
		{
			return (haystack);
		}
		haystack++;

	}
	return (NULL);

}
