#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to the head node
 * Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	
	listint_t *past = NULL;
	listint_t *present = *head;
	listint_t *next = NULL;
	
	if (present == NULL || *present == NULL)
		return  (NULL);
	while (present != NULL)
	{
		next = present->next;
		present->next = past;
		past = present;
		present = next;
	}
	*head = past;

	return (*head);
}

