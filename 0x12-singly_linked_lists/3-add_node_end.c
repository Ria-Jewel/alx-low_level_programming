#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - appends a new node to the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to be placed in the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *temp = *head;
unsigned int length = 0;

while (str[length])
length++;

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
new_node->len = length;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (temp->next)
temp = temp->next;

temp->next = new_node;

return (new_node);
}

