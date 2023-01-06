#include "main.h"
/**
 *puts_half - print half of a string
 *@str: character to check
 *Return: returns void
 */

void puts_half(char *str)
{
int i, start, len = 0;

char *p = str;
while (*p != '\0')
{
len++;
p++;
}
start = (len - 1) / 2;
for (i = start + 1; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
