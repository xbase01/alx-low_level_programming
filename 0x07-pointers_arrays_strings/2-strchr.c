#include "main.h"

/**
 * *_strchr - locates a string character
 * @s: address of the string character
 * @c: is the character to locate
 * Return: returns a pointer if character found else Null
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return ('\0');
}
