#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list
 * @head: pointer to the first node in the list
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list, or NULL if it
 * doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node = head;
unsigned int i;

for (i = 0; node != NULL && i < index; i++)
node = node->next;

return ((i == index) ? node : NULL);
}
