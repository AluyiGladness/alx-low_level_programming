#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to pointer of the head node
 * @idx: index to add the new node
 * @n: value of head
 * Return: address of new node or NULL if it failed
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newly_addednode, *temporary = *head;
	unsigned int i;

	newly_addednode = malloc(sizeof(listint_t));
	if (newly_addednode == NULL)
		return (NULL);

	newly_addednode->n = n;


	if (idx == 0)
	{
		newly_addednode->next = *head;
		*head = newly_addednode;
		return (newly_addednode);
	}
	for (i = 0; i < idx - 1 && temporary != NULL; i++)
		temporary = temporary->next;

	if (temporary == NULL)
	{
		free(newly_addednode);
		return (NULL);
	}
	newly_addednode->next = temporary->next;
	temporary->next = newly_addednode;
	return (newly_addednode);
}
