#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits a string into words
 * @str: input string
 * Return: returns a pointer of array of string if successful otherwise NULL
 */
char **strtow(char *str)
{
int i, j, k, len = strlen(str), count, start = 0;
char **ptr;

if (str == NULL || str[0] == '\0')
return (NULL);
count = count_words(str);
ptr = malloc((count + 1) * sizeof(char *));
if (ptr == NULL)
return (NULL);
for (i = 0, j = 0; i < len; i++)
{
if (str[i] != ' ')
{
if (start == 0)
{
start = 1;
ptr[j] = malloc((len - i) * sizeof(char));
if (ptr[j] == NULL)
{
while (j >= 0)
free(ptr[j--]);
free(ptr);
return (NULL);
}
k = 0;
}
ptr[j][k++] = str[i];
}
else
{
if (start == 1)
{
start = 0;
ptr[j++][k] = '\0';
}
}
}
ptr[j] = NULL;
return (ptr);
}

/**
 * count_words - counts word in string
 * @str: input string
 * Return: returns count
 */

int count_words(char *str)
{
int i, count = 0, start = 0;
for (i = 0; str[i]; i++)
{
if (str[i] != ' ')
{
if (start == 0)
{
start = 1;
count++;
}
}
else
{
start = 0;
}
}
return (count);
}
