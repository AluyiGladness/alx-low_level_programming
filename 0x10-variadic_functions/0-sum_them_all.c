#include <stdio.h>
#include <stdlib.h>
/**
 * sum_them_all - adds up all arguments
 * @n: first integer given in function parameter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list x;
	int sumTotal = 0;

	if (n == 0)
		return (0);

	va_start(x, n);

	for (i = 0; i < n; i++)
		sumTotal = sumTotal + va_arg(x, int);
	va_end(x);
	return (sumTotal);

}

