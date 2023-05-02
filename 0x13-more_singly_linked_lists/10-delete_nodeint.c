#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a particular index
 * of a linked list.
 * @head: pointer to the head node of the list
 * @index: index of the node to be deleted/removed
 *
 * Return: 1 if successful, -1 if not successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *present, *temporary;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temporary = *head;
		*head = (*head)->next;
		free(temporary);
		return (1);
	}

	present = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (present == NULL || present->next == NULL)
			return (-1);
		present = present->next;
	}

	temporary = present->next;
	present->next = temporary->next;
	free(temporary);
	return (1);
}

