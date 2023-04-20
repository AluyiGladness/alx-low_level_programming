#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates through array
 * @array: array to iterate through
 * @size: array size
 * @action: function to carry out
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return ();
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
