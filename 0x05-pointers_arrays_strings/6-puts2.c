#include "main.h"
/**
 *puts2 - prints character of a string
 *@str: character to check
 *Return: void
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i += 1)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
