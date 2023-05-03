#include "lists.h"

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
}

