#include <stdio.h>
/**
 *main - prints the number from 1 to 100
 *printing Fizz, Buzz and FizzBuzz for multiple of
 *3, 5 and both respectively
 *Return: Returns void
 */
int main(void)
{
int i;

for (i = 1; i < 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("Buzz\n");
return (0);
}
