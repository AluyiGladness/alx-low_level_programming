#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head node
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *present, *h = head;
	size_t counter = 0;

	while (h && h > h->next)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		counter++;
		present = h;
		h = h->next;
		if (present <= h)
			exit(98);
	}

	if (h)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		counter++;
	}

	return (counter);

}

