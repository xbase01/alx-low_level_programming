#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: character to check
 *@src: another character to check
 *Return: Returns dest
 */

char *_strcat(char *dest, char *src)
{
size_t i, j;

for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
