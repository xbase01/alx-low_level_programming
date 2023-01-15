#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: input string
 * Return: returns pointer if successful otherwise NULL
 */
char *_strdup(char *str)
{
char *ptr;
int length = strlen(str) + 1;

if (str == NULL)
return (NULL);

ptr = malloc(length * sizeof(char));
if (ptr == NULL)
return (NULL);

strncpy(ptr, str, length);
return (ptr);
}
