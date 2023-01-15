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
int length = 0;
 char *temp = str;

if (str == NULL)
return (NULL);

 while (*temp++)
   length++;
 length++;
 

ptr = malloc(length * sizeof(char));
if (ptr == NULL)
return (NULL);

 temp = ptr;
 while ((*temp++ = *str++));
 return (ptr);
}
