#include "main.h"
/**
 * is_prime_number - identify prime numbers
 * @n: number to examine
 * Return: returns 0 0r 1
 */
int is_prime_number(int n)
{
	if (n > 2)
	{
		if ((n % 2 != 0 && n % 3 != 0) && (n % 5 != 0))
		{
			return (0);
		}
		return (1);
	}
	if (n < 0)
		return (0);
	else
		return (1);
}
