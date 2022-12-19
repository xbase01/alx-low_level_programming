#include "main.h"

/**
 *_puts - prints a string followed by a new line
 *@str: string to print
 *Return: returns the value of str
 */

void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
