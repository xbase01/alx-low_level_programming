#include "main.h"

/**
 *rev_string - reverses a string
 *@s: string to reverse and print
 *Return: void
 */

void rev_string(char *s)
{
int len = strlen(s);
int i;

for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
}
