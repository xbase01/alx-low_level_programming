#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: character to check
 *@s2: character to check
 *Return: returns 0
 */

int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}

return (0);

}
