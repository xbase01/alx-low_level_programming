#include <stdio.h>
/**
 *main - computes the sum of all the multiples of 3 or 5 below 1024
 *
 *Return: returns 0
 */

int main(void)
{
int n = 1024;
int sum = 0;
int i;

for (i = 0; i < n; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum = sum + i;
}
}
printf("%d\n", sum);
return (0);
}
