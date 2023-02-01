#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head node
 *
 * Return: returns the address where the loop starts or
 * NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head, *fast = head;

while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}
return (NULL);
}
