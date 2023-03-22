#include "main.h"
#include "6-abs.c"
/**
 *print_last_digit - main function
 *
 * @n: number to print its last digit
 *
 * Return: returns last digit
 *
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10))
	return (_abs(n % 10));
}
