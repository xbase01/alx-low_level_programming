#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: return 0 if successful, 1 if invalid arguments
 */

int main(int argc, char *argv[])
{
int cents;
int coins[] = {25, 10, 5, 2, 1};
int num_coins = 0;
int i;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}


for (i = 0; i < 5; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
num_coins++;
}
}
printf("%d\n", num_coins);
return (0);
}
