#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - Prints out all the elements of the listint_t list.
 * @h: a Pointer that points to the head of the list.
 *
 * Return: The nodes count
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *head = h;
	size_t counter = 0;

	while (head)
	{
		printf("%d\n", head->n);
		counter++;
		head = head->next;
	}

	return (counter);
}

