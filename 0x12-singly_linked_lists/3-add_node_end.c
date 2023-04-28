#include "lists.h"
/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @str: string to be used as content of the newly_addedly added node
 *
 * Return: address of the newly_addedly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newly_added;
	list_t *ptr = *head;
	char *duplicate;

	duplicate = strdup(str);

	newly_added = malloc(sizeof(list_t));
	if (newly_added != NULL)
	{
		newly_added->str = duplicate;
		newly_added->len = _strlength(str);
		newly_added->next = NULL;
	}
	else
		return (NULL);
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = newly_added;
	}
	else
		*head = newly_added;
	return (newly_added);
}
/**
 * _strlength - counts the length of a string
 * @str: string to be counted
 *
 * Return: the length of the string
 */
int _strlength(const char *str)
{
	int x = 0;

	while (str[x] != '\0')
		x++;
	return (x);
}
