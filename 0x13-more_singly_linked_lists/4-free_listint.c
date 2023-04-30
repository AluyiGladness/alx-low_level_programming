#include "lists.h"

/**
 * free_listint - Frees a space in a linked list.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *present_node;

	while (head != NULL)
	{
		present_node = head;
		head = head->next;
		free(present_node);
	}
}

