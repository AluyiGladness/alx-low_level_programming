#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments to be passed to function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separ = "";

	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separ, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", separ, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", separ, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separ, str);
					break;
				default:
					i++;
					continue;
			}
			separ = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(ap);
}
