#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: integer array
 * @size: array size
 * @cmp: pointer to the function
 * that will be used to compare values.
 *
 * Return: index of the first element for which the cmp
 * function does not return 0.
 * If no elements matches, return -1.
 * If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (y = 0; y < size; y++)
			if (cmp(array[y]))
				return (y);
	}

	return (-1);
}
