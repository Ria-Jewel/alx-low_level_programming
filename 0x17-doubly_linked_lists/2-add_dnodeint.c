#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Inserts a new node at the beginning of the linked list.
 * @head: Double pointer to the start of the linked list.
 * @n: Value to be added to the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 *
 * This function creates a new node with the provided value 'n' and inserts it
 * at the beginning of the linked list. The 'head' pointer is updated to point
 * to the new node, and the previous pointers are adjusted accordingly.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	*head = new_node;

	if (new_node->next != NULL)
		(new_node->next)->prev = new_node;

	return (new_node);
}

