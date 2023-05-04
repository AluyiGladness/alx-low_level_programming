#include "lists.h"

/**
 * examine_listint_loop -  finds a loop in a linked list
 * @head: start of the linked list to search
 * Return: Return the address of node where loop starts
 * or NULL if loop is absent
 */
listint_t *examine_listint_loop(listint_t *head)
{
	listint_t *fast, *last;

	if (head == NULL)
		return (NULL);

	for (last = head->next; last != NULL; last = last->next)
	{
		if (last == last->next)
			return (last);

		for (fast = head; fast != last; fast = fast->next)

			if (fast == last->next)
				return (last->next);
	}

	return (NULL);

}

/**
 * free_listint_safe - frees a linked list
 * @h: double pointer to head node of a linked list
 * Return: Return size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loop_thru_node;
	size_t counter;
	int loops = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loop_thru_node = examine_listint_loop(*h);

	for (counter = 0; (*h != loop_thru_node || loops) && *h != NULL; *h = next)
	{
		counter++;
		next = (*h)->next;

		if (*h == loop_thru_node && loops)
		{
			if (loop_thru_node == loop_thru_node->next)
			{
				free(*h);
				break;
			}
			counter++;
			next = next->next;
			free((*h)->next);
			loops = 0;
		}

		free(*h);
	}

	*h = NULL;
	return (counter);

}
