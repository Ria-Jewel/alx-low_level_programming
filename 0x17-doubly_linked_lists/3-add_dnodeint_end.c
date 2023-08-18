#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Appends a node to the end of a linked list.
 * @head: Double pointer to the beginning of the linked list.
 * @n: Value to be added to the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 *
 * This function creates a new node with the given value 'n' and appends it
 * to the end of the linked list. The 'head' pointer is updated if necessary,
 * and the previous pointers are adjusted accordingly.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;
	new_node->prev = tmp;

	return (new_node);
}

