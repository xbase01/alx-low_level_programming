#include "main.h"
/**
 *print_line - draws a straight line in the terminal
 *@n: character to check
 *Return: Returns n
 */
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
