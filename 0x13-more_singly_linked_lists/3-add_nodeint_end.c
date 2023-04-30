#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the end of a linked list
 * @head:pointer to pointer to the head of the list.
 * @n: Value to be given to the n member of the new node.
 *
 * Return: returns address of new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newly_addednode, *present_node;

	if (head == NULL)
		return (NULL);

	newly_addednode = malloc(sizeof(listint_t));
	if (newly_addednode == NULL)
		return (NULL);

	newly_addednode->n = n;
	newly_addednode->next = NULL;

	if (*head == NULL)
	{
		*head = newly_addednode;
		return (newly_addednode);
	}

	present_node = *head;
	while (present_node->next != NULL)
		present_node = present_node->next;

	present_node->next = newly_addednode;

	return (newly_addednode);
}

