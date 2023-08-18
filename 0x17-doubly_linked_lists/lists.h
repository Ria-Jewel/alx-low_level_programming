#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/**
 * struct dlistint_s - Doubly linked list node structure
 * @n: Value stored in the node
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 *
 * Description: Defines a structure for doubly linked list nodes
 */
typedef struct dlistint_s
{
    int n;                     /* Value stored in the node */
    struct dlistint_s *prev;   /* Pointer to the previous node */
    struct dlistint_s *next;   /* Pointer to the next node */
} dlistint_t;

/* Function prototypes */
size_t print_dlistint(const dlistint_t *h); /* Print all elements of a dlistint_t list */
size_t dlistint_len(const dlistint_t *h);   /* Get the length of a dlistint_t list */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);     /* Add a node at the beginning */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n); /* Add a node at the end */
void free_dlistint(dlistint_t *head);                         /* Free memory of a dlistint_t list */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index); /* Get node at index */
int sum_dlistint(dlistint_t *head);                            /* Sum of all elements */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n); /* Insert node at index */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index); /* Delete node at index */

#endif /* LIST_H */

