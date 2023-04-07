#include "main.h"
/**
 * _pow_recursion - prints the value of x raised to the power of y.
 * @x: integer 1
 * @y: integer 2
 *
 * Return: returns the pow or -1 error
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}

}
