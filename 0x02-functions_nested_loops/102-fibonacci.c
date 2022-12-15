#include <stdio.h>
/**
 *main - prints first 50 Fibonacci numbers
 *
 *Return: Returns 0
 */

int main(void)
{
int first = 1, second = 2, next, c;

printf("%d, %d", first, second);

for (c = 0; c < 48; c++)
{
next = first + second;
printf(", %d", next);
first = second;
second = next;
}
printf("\n");

return (0);
}
