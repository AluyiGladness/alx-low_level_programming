#include "main.h"

#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be searched for
 * Return: a pointer to the beginning of the located substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
