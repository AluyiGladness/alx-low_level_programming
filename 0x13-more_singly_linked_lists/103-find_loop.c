#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: the pointer to the head node
 * Return: Return the address where loop starts or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *present, *last_node;

	if (head == NULL)
		return (NULL);

	for (last_node = head->next; last_node != NULL; last_node = last_node->next)
	{
		if (last_node == last_node->next)
			return (last_node);
		for (present = head; present != last_node; present = present->next)
			if (present == last_node->next)
				return (last_node->next);
	}

	return (NULL);

}


