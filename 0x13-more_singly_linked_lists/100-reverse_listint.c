#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to the head node
 * Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *past = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return  (NULL);
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = past;
		past = *head;
		*head = next;
	}
	*head = past;

	return (*head);
}

