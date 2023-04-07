#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number parameter
 * Return: returns the factorial or -1 error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
