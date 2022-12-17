#include <stdio.h>

/**
 * main - prints first 50 numbers of the fibonacci sequence
 *
 * Description: This function prints from 1 to 50
 *
 * Return: 0 (success)
 */
int main(void)
{
long prev, curr, temp;
int cunt;

cunt = 1;
prev = 1;
curr = 2;
printf("%ld, %ld, ", prev, curr);
while (cunt <= 48)
{
temp = curr;
curr += prev;
prev = temp;
printf("%ld", curr);
if (cunt != 48)
printf(", ");
++cunt;
}
printf("\n");
return (0);
}
