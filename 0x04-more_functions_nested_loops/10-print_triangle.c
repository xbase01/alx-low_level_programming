#include "main.h"
/**
 *print_triangle - prints a triangle
 *@size: character to check
 *Return: Returns value of size
 */
void print_triangle(int size)
{
int row, col, spaces;

for (row = 1; row <= size; row++)
{
for (spaces = 1; spaces <= size - row; spaces++)
{
_putchar(' ');
}
for (col = 1; col <= row; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
