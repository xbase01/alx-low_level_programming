#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer  to pointer to head of linked list
 * @index: index of node to delete, starting at 0
 *
 * Return: 1 if success, -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *copy = *head;
unsigned int node;

if (copy == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(copy);
return (1);
}

for (node = 0; node < (index - 1); node++)
{
if (copy->next == NULL)
return (-1);

copy = copy->next;
}

tmp = copy->next;
copy->next = tmp->next;
free(tmp);
return (1);
}
