#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: the argument count
 * @argv: the arguments as string array
 *
 * Description: print positive integers
 *
 * Return: 0 (success), 1 (if no argument provided
 * or if a symbol which is not a digit found)
 */
int main(int argc, char *argv[])
{
int i, sum;
char *ptr;

sum = 0;
for (i = 1; i < argc; ++i)
{
strtol(argv[i], &ptr, 10);
if (*ptr == '\0')
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
