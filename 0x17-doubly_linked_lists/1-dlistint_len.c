#include "lists.h"

/**
 * dlistint_len - Counts the number of nodes in a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 *
 * This function iterates through a doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;  /* Counter for the number of nodes */

	/* Iterate through the linked list and count the nodes */
	for (i = 0; h != NULL; i++)
	{
		h = h->next;  /* Move to the next node */
	}

	return (i);  /* Return the number of nodes */
}

