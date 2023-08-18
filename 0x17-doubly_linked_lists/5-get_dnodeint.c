#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves a specific node from a linked list.
 * @head: Pointer to the beginning of the list.
 * @index: Index of the node to be retrieved.
 *
 * Return: Pointer to the node at the given index, or NULL on failure.
 *
 * This function searches for and returns a pointer to the node linked list
 * corresponding to the specified index. If the index is out of bounds
 * is empty, it returns NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}

