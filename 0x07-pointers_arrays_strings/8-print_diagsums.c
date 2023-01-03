#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals of
 * a square matrix of integers
 * @a: matrix of integers
 * @size: size of the matrix
 *Return: void
 */

void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * (size + 1)];
sum2 += a[(i + 1) * (size - 1)];
}
_putchar(sum1 + '0');
_putchar(' ');
_putchar(sum2 + '0');
_putchar('\n');
}
