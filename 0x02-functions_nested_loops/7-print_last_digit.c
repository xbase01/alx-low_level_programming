#include "main.h"

/**
 *print_last_digit - Prints the last digit of a number.
 *
 * @x: The number to print the last digit of.
 *Return:last digit of x.
 */
int print_last_digit(int x)
{
int last_digit = x % 10;

if (last_digit < 0)
{
last_digit *= -1;
}

_putchar(last_digit);
return (last_digit);
}
