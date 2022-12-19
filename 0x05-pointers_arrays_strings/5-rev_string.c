#include "main.h"

/**
 *rev_string - reverses a string
 *@s: string to reverse and print
 *Return: void
 */

void rev_string(char *s)
{
int i, j;
char temp;

for (i = 0; s[i] != '\0'; i++)
{
}
i--;
for (j = 0; j < i; j++, i--)
{
temp = s[j];
s[j] = s[i];
s[i] = temp;
}
}
