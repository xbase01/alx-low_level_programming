#include "main.h"
/**
 *puts2 - prints character of a string
 *@str: character to check
 *Return: void
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
