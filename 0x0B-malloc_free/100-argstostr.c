#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments
 * @ac: argument
 * @av: argument pointer
 * Return: returns a pointer if successful otherwise NULL
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0;
char *ptr;
int pos = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
for (j = 0; av[i][j]; j++)
len++;
len += ac;

ptr = malloc(sizeof(char) * (len + 1));
if (ptr == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
ptr[pos++] = av[i][j];
ptr[pos++] = '\n';
}
ptr[pos] = '\0';

return (ptr);
}
