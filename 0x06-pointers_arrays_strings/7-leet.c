#include "main.h"
/**
 *leet - encodes a string into 1337
 *@s: character to check
 *Return: returns 0
 */
char *leet(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{

if (s[i] == 'a')
{
s[i] = '4';
}
else if (s[i] == 'e')
{
s[i] = '3';
}
else if (s[i] == 'o')
{
s[i] = '0';
}
else if (s[i] == 't')
{
s[i] = '7';
}
else if (s[i] == 'l')
{
s[i] = '1';
}
}

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == 'A')
{
s[i] = '4';
}
else if (s[i] == 'E')
{
s[i] = '3';
}
else if (s[i] == 'O')
{
s[i] = '0';
}
else if (s[i] == 'T')
{
s[i] = '7';
}
else if (s[i] == 'L')
{
s[i] = '1';
}
}

return s;
}
