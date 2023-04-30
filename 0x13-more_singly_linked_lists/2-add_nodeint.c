#include "lists.h"

/**
 * add_nodeint - Adds new node to the start of list.
 * @head: pointer to pointer to the head of the list.
 * @n: Value to be given to n member of the new node
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newly_addednode;

	if (head == NULL)
		return (NULL);

	newly_addednode = malloc(sizeof(listint_t));
	if (newly_addednode == NULL)
		return (NULL);

	newly_addednode->n = n;
	newly_addednode->next = *head;
	*head = newly_addednode;

	return (newly_addednode);
}

