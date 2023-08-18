#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all data in a dlistint_t linked list.
 * @head: Pointer to the beginning of the linked list.
 *
 * Return: The sum of all data, or 0 if the list is empty.
 *
 * This function traverses the dlistint_t linked list
 * of each node's 'n' element. The sum is then returned.
 * function returns 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;  /* Accumulate the value of the current node's 'n' element */
		head = head->next;  /* Move to the next node */
	}

	return (sum);
}

