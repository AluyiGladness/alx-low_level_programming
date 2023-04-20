#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterates through array
 * @array: array to iterate through
 * @size: array size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for  (i = 0; i < size; i++)
			action(array[i]);
}
