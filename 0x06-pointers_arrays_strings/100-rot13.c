#include "main.h"
/**
 *rot13 - encodes a string using rot13
 *@s: character to check
 *Return: returns 0
 */

char *rot13(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{

if (s[i] < 'n')
{
s[i] = s[i] + 13;
}
else
{
s[i] = s[i] - 13;
}
}
}

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'A' && s[i] <= 'Z')
{

if (s[i] < 'N')
{
s[i] = s[i] + 13;
}
else
{
s[i] = s[i] - 13;
}
}
}

return (s);
}
