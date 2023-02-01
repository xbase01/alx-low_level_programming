#include "lists.h"
#include <string.h>
#include <stddef.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the pointer of the first node
 *
 * Return: returns the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
listint_t *temp, *node;
size_t count = 0;

if (h == NULL || *h == NULL)
return (count);

node = *h;
while (node != NULL)
{
temp = node->next;
count++;
free(node);
node = temp;
if (node == *h)
{
break;
}
}
*h = NULL;

return (count);
}
