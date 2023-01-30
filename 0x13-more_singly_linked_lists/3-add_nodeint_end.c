#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a listint_t list
 * @head: a pointer to a pointer to the first node in the list
 * @n: the integer to be added to the new node
 *
 * Return: returns the address of the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *temp;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}
temp = *head;
while (temp->next != NULL)
temp = temp->next;

temp->next = new;
return (new);
}
