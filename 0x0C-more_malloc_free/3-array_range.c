#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: expected input for minimum integer
 * @max: expected output for maximum integer
 * Return: returns pointer to newly created array
 */
int *array_range(int min, int max)
{
int size, i;
int *arr;

if (min > max)
return (NULL);

size = max - min + 1;
arr = malloc(sizeof(arr) * size);
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = min + i;
return (arr);
}
