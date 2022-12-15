#include <stdio.h>
/**
 *main - prints the first 98 Fibonacci numbers
 *
 *Return: returns 0
 */

int main(void)
{
int first = 1, second = 2, next, c;

printf("%d, %d", first, second);

for (c = 0; c < 96; c++)
{
next = first + second;
printf(", %d", next);
first = second;
second = next;
}

printf("\n");

return (0);
}
