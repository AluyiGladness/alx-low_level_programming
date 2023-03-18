#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 *
 * Return: always returns 0.
 *
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z' ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
