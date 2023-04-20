#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers separated by a separator
 * @separator: separator numbers
 * @n: number of variable arguments in the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list x;

	va_start(x, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(x, int));

		if (separator && (j < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);


}
