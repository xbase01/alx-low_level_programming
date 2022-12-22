#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: character to check
 *@src: character to check
 *@n: character to check
 *Return: returns 0
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
i = 0;
while (src[i] != '\0')
{
i++;
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
