#include "lists.h"

/**
 * get_nodeint_at_index - Returns the a particular node of a list(nth node)
 * @head: Pointer that points to the head node
 * @index: node Index, starting at 0.
 *
 * Return: returns a pointer to a particular node or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *present_node;
	unsigned int index_of_node;

	present_node = head;
	index_of_node = 0;

	while (present_node != NULL && index_of_node < index)
	{
		present_node = present_node->next;
		index_of_node++;
	}

	if (index_of_node == index && present_node != NULL)
		return (present_node);
	else
		return (NULL);
}

