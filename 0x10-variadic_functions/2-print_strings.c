#include <stdio.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
/**
 * print_strings - prints string separated by separator
 * @separator: separates strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list x;
	char *s;

	va_start(x, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		s = va_arg(x, char*);
		if (s == NULL)
			printf("nil");
		printf("%s", s);

		if (separator && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);

}
