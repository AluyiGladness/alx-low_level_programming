#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @head; double pointer to head node
 * Return: size of list that is freed
 *
 */
size_t free_listint_safe(listint_t **head)
{
	size_t counter = 0;
	listint_t *temporary;

	while (*head)
	{
		counter++;
		temporary = *head;
		*head = (*head)->next;
		free(temporary);
		if (temporary <= *head)
			break;
	}

	*head = NULL;

	return (counter);
}

