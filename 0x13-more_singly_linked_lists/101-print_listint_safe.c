#include "lists.h"

/**
 * count_nodes_before_loop - nodes to print
 * @head: pointer to head node of linked list
 * Return: number of unique nodes in list till a loop
 */
int count_nodes_before_loop(const listint_t *head)
{
	int count = 0;
	const listint_t *tort, *hare;

	tort = hare = head;

	while (tort != NULL && hare != NULL)
	{
		tort = tort->next;
		hare = hare->next->next;
		count++;

		if (tort == hare)
		{
			tort = head;
			while (tort != hare)
			{
				tort = tort->next;
				hare = hare->next;
				count++;
			}
			return (count);
		}
	}
	return (0);
}

/**
 * is_loop_present - searches for a loop in linked list
 * @head: pointer to head node of linked list
 * Return: 0 if no loop, 1 if loop
 */

int is_loop_present(const listint_t *head)
{
	const listint_t *tort, *hare;

	tort = hare = head;

	while (tort != NULL && hare != NULL)
	{
		tort = tort->next;
		hare = hare->next->next;

		if (tort == hare)
			return (1);
	}
	return (0);
}

/**
 * print_listint_safe - prints linked list
 * @head: pointer to head node of list
 * Return: node count in list, exit(98) if it fails
 */

size_t print_listint_safe(const listint_t *head)
{
	int loop_present, counter = 0;
	size_t num_nodes = 0;
	const listint_t *temporary;

	if (head == NULL)
		exit(98);

	loop_present = is_loop_present(head);

	if (loop_present == 1)
	{
		counter = count_nodes_before_loop(head);
		for (loop_present = 0; loop_present < counter; loop_present++)
		{
			printf("[%p] %d\n", (void *)temporary, temporary->n);
			num_nodes += 1;
			temporary = temporary->next;
		}
	}
	else if (loop_present == 0)
	{
		temporary = head;
		while (temporary != NULL)
		{
			printf("[%p] %d\n", (void *)temporary, temporary->n);
			num_nodes += 1;
			temporary = temporary->next;
		}
	}

	return (num_nodes);

}

