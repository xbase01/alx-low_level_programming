#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t n;

n = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
n++;
}
return (n);
}
