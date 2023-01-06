#include "main.h"
/**
 *_strcpy - copies the string pointed by src
 *@dest: character to check
 *@src: character to check
 *Return: returns pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *p = dest;
while (*src != '\0')
{
*p = *src;
p++;
src++;
}
*p = '\0';
return (dest);
}
