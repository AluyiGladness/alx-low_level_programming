#include "lists.h"
<<<<<<< HEAD

/**
 * print_listint_safe - Prints a list
 * @head: Pointer to the head of the list.
 *
 * Return: The counter of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *present, *temporary;
	
	if (head == NULL)
		exit(98);
	
	present = head;
	
	
	while (present != NULL)
	{
		printf("[%p] %d\n", (void *) present, present->n);
		
		counter++;
		
		if (present > curr->next)
		{
			
			temporary = present->next;
            while (temporary != present)
            {
                printf("[%p] %d\n", (void *) temporary, temp->n);
                counter++;
                temporary = temporary->next;
            }
            printf("-> [%p] %d\n", (void *) present->next, present->next->n);
            break;
        }

        present = present->next;
    }

    return (counter);
=======
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head node
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *present;
	size_t counter = 0;

	while (head && head > head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		counter++;
		present = head;
		head = head->next;
		if (present <= head)
			exit(98);
	}

	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		counter++;
	}

	return (counter);
>>>>>>> 3f7eda7fcac5354f4e4d10622586066b4ad0ccc1
}

