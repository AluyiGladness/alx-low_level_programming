#include "lists.h"

/**
 * total_listint - prints the sum of all data(n)
 * @head: Pointer to the head node.
 *
 * Return: total of all data (n) or 0 when the list is empty
 */
int total_listint(listint_t *head)
{
	int total = 0;
	listint_t *present_node = head;

	while (present_node != NULL)
	{
		total += present_node->n;
		present_node = present_node->next;
	}

	return (total);
}

