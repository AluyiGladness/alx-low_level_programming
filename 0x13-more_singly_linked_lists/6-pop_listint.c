#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list
 *               and returns its content
 * @head: Pointer to a pointer to the head node of the list.
 *
 * Return: The content of the deleted head node, or 0 if empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary_node;
	int content;

	if (head == NULL || *head == NULL)
		return (0);

	temporary_node = *head;
	*head = (*head)->next;
	content = temporary_node->n;
	free(temporary_node);

	return (content);
}

