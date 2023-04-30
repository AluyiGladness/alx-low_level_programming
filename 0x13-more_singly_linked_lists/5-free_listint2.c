#include "lists.h"

/**
 * free_listint2 - Frees a list and sets its head as NULL
 * @head: this iis a double pointer to the head of the list listint_t
 */


void free_listint2(listint_t **head)
{
	listint_t *present_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		present_node = *head;
		*head = (*head)->next;
		free(present_node);
	}

	*head = NULL;
}

