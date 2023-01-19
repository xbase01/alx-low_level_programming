#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 for wrong number of arguments,
 * 99 for incorrect operator, 100 for division by zero
 */

int main(int argc, char *argv[])
{
int num1, num2;
int (*f)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
f = get_op_func(argv[2]);
if (f == NULL)
{
printf("Error\n");
exit(99);
}
if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
printf("%d\n", f(num1, num2));
return (0);
}
