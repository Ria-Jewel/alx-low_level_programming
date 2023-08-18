#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t linked list.
 * @head: Pointer to the beginning of the linked list.
 *
 * Return: Void.
 *
 * This function releases the memory occupied by the entire list.
 * It iterates through the list, freeing each node and updating pointer.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next; /* Store the next node before freeing the current node */
		free(head);        /* Free the current node */
		head = next;       /* Move to the next node */
	}
}

