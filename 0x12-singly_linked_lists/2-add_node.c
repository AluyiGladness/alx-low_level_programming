#include "lists.h"

/**
 * add_node - adds a node to the start of a linked list
 * @head: points to the head of the list
 * @str: string to be used as content of the node
 *
 * Return: address of the newly added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *duplicate;
	duplicate = strdup(str);

	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = duplicate;
		new->len = _strlength(str);
		new->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new->next = *head;
	*head = new;
	return (new);
}

/**
 * _strlength - counts string length
 * @str: string to be counted
 *
 * Return: string length
 */
int _strlength(const char *str)
{
	int x = 0;

	while (str[x] != '\0')
		x++;
	return (x);
}
