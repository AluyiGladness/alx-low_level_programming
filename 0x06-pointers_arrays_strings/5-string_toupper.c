#include "main.h"
/**
 * string_toupper - converts uppers to lowers
 * @s: character to make upper
 * Return: return value of upper
 */
char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] = s[i] - 32;
			i++;
		}
	}
	return (s);

}
