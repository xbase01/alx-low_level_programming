#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: return variable
 *@src: character to check
 *@n: character to check
 *Return: returns 0
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
char *dest_end = dest;

while (*dest_end != '\0')
{
dest_end++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
*dest_end++ = src[i];
}
*dest_end = '\0';

return (dest);

}
