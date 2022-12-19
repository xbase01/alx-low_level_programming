#include <stdio.h>
/**
 *print_array - prints n elements of an array of integers
 *@a: Character to check
 *@n: character to check
 *Return: returns void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i > 0)
{
printf(", ");
}
printf("%d", a[i]);
}
printf("\n");
}
