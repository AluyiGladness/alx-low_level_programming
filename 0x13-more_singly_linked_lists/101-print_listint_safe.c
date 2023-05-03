#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head node
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *present;
	size_t counter = 0;

	while (head && head > head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		counter++;
		present = head;
		head = head->next;
		if (present <= head)
			exit(98);
	}

	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		counter++;
	}

	return (counter);
}

