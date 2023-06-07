#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list
 * @head: Pointer to the first node in the linked list
 * @index: Index of the node to return
 *
 * Return: Pointer to the node at the given index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *current = head;

while (current != NULL && count < index)
{
current = current->next;
count++;
}

return (current != NULL ? current : NULL);
}

