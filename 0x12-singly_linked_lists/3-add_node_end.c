#include "lists.h"
/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @str: string to be used as content of the newly added node
 *
 * Return: address of the newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *csr = *head;

	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = _strlength(str);
		new->next = NULL;
	}
	else
		return (NULL);
	if (csr != NULL)
	{
		while (csr->next != NULL)
			csr = cursor->next;
		csr->next = new;
	}
	else
		*head = new;
	return (new);
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
