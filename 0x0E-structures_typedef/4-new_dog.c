#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of string
 */

int _strlen(char *s)
{
int len = 0;

while (s[len])
len++;

return (len);
}

/**
 * _strcpy - copies a string to a new buffer
 * @src: source string
 * @dest: destination buffer
 * Return: returns pointer to destination buffer
 */

char *_strcpy(char *src, char *dest)
{
int i;

for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';

return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog, or NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_dog->name = malloc(_strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
_strcpy(name, new_dog->name);

new_dog->owner = malloc(_strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
_strcpy(owner, new_dog->owner);

new_dog->age = age;

return (new_dog);
}
