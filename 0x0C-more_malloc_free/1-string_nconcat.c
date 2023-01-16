#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: max length of string to concatenate
 * Return: returns pointer to newly allocated memory otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
char *concat;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; (s2[j] != '\0') && (j < n); j++)
{
}

concat = (char *) malloc(sizeof(char) * (i + j + 1));
if (concat == NULL)
exit(98);
for (i = 0; s1[i]; i++)
concat[i] = s1[i];

for (j = 0; s2[j] && j < n; j++)
concat[i + j] = s2[j];
concat[i + j] = '\0';

return (concat);
}
