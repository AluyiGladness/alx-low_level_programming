#include "lists.h"


/**
 * print_listint - Prints out all the elements of the listint_t list.
 * @h: a Pointer that points to the head of the list.
 *
 * Return: The nodes count
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter += 1;

		printf("%d\n", h->n);

		h = h->next;
	}

	return (counter);
}

