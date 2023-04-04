#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int x;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		if (haystack[x] == needle
