#include "main.h"
/**
 * string_toupper -converts a stting in lower format to upper
 * @s: character to make upper
 * Return: return value of upper
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);

}
