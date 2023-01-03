#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to iterate
 * @needle: substring to locate
 * Return: returns a pointer to the beginning of located
 * substring or NULL if needle is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (needle[j] == '\0')
{
return (&haystack[i]);
}
}
return ('\0');
}
