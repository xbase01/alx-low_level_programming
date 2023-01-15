#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: character to concatenate
 * @s2: character to concatenate
 * Return: returns pointer containing s1 followed by s2 otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
int len1 = 0, len2 = 0;
char *ptr;
int i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;
while (s2[len2])
len2++;

ptr = malloc(sizeof(char) * (len1 + len2 + 1));
if (ptr == NULL)
return (NULL);

for (i = 0; i < len1; i++)
ptr[i] = s1[i];
for (i = 0; i < len2; i++)
ptr[len1 + i] = s2[i];

ptr[len1 + len2] = '\0';
return (ptr);
}
