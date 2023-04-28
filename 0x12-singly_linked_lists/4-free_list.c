#include "lists.h"

/**
 * free_list - frees linked list
 * @head: head of the list
 *
 * Return: nothing(void)
 */
void free_list(list_t *head)
{
	list_t *list;

	if (head != NULL)
	{
		while (head != NULL)
		{
			list = head;
			head = head->next;
			free(list->str);
			free(list);
		}
	}
}
