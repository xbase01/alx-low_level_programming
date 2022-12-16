#include "main.h"
/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: character to check
 *Return: Returns n
 */

void print_diagonal(int n)
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}

if (n <= 0)
{
_putchar('\n');
}
}
