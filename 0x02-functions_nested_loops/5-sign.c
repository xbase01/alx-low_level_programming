#include "main.h"

/**
 *print_sign - prints the sign of a number
 *
 *@n: character to check
 *
 *Return: 1 if x is positive or 0 if x is zero or -1 if x is negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
