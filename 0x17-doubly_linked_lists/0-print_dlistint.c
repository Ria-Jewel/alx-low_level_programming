#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;  /* Counter for the number of nodes */

	/* Iterate through the linked list and print the elements */
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);  /* Print the value of the current node */
		h = h->next;  /* Move to the next node */
	}

	return (i);  /* Return the number of nodes */
}

