#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously allocated
 * @grid: grid pointer
 * @height: height of allocated pointer
 * Return: returns void
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
