#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 for wrong number of arguments,
 * 99 for incorrect operator, 100 for division by zero
 */

int main(int argc, char *argv[])
{
int a, b;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

if (argv[2][1])
{
printf("Error\n");
exit(99);
}

operation = (*get_op_func)(argv[2]);

if (operation == NULL)
{
printf("Error\n");
exit(99);
}

a = atoi(argv[1]);
b = atoi(argv[3]);

printf("%d\n", operation(a, b));
return (0);
}
