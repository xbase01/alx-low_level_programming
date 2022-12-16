#include "main.h"
/**
 *print_triangle - prints a triangle
 *@size: character to check
 *Return: Returns value of size
 */
void print_triangle(int size)
{
int row, spaces;

for (row = 0; row < size; row++)
{
for (spaces = 0; spaces < size - row - 1; spaces++)
{
_putchar(' ');
}
for (spaces = 0; spaces <= row; spaces++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
