#include "lists.h"

/**
 * listint_len - Returns the number of element in list.
 * @h: Pointer to the start of the list.
 *
 * Return: count of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}

