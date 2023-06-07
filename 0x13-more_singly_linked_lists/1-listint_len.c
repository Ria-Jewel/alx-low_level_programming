#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: Linked list of type listint_t to traverse
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}

