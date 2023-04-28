#include "lists.h"
#include <stddef.h>
/**
 * list_len - counts the number of nodes.
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
