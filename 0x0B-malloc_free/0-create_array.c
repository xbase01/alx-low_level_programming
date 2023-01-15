#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array and initialize it
 * @size: size of array
 * @C: character
 * Return: returns a pointer if successful or NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
  unsigned int i;
  char *ptr;
  
  if (size == 0)
    return (NULL);
  ptr = (char*) malloc(size * sizeof(char));
  if (ptr == NULL)
    return (NULL);
  for (i = 0; i < size; i++)
    ptr[i] = c;
  return (ptr);
}
