#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog pointer
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d != NULL)

free(d->name);
free(d->owner);
free(d);
}
