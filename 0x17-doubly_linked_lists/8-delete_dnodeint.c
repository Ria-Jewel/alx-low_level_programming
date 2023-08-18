#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes a node at a specified index.
 * @head: Double pointer to the linked list.
 * @index: Index at which the node should be deleted.
 *
 * Return: 1 on success, -1 on failure.
 *
 * This function deletes the node at the given index.
 * If the index is 0, the head node is removed and the head pointer is updated.
 * The previous and next pointers of the surrounding nodes are adjusted.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;

		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}

		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}

