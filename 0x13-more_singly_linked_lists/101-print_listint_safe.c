#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: A pointer to the head of the list
 *
 * Return: The node count in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *present = head;
	const listint_t *past = NULL;
	size_t counter = 0;

	while (present != NULL)
	{
		printf("[%p] %d\n", (void *)present, present->n);
		counter++;

		if (present < past)
		{
			break;
		}

		past = present;
		present = present->next;
	}

	if (present != NULL)
	{
		printf("-> [%p] %d\n", (void *)present, present->n);
		counter++;
	}
	return (counter);
}

