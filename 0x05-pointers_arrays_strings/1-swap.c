#include "main.h"

/**
 * main - swaps the values of two integers.
 *@a: integer to swap with b
 *@b: integer to swap with a
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
if (a != NULL && b != NULL)
{
int temp = *a;
*a = *b;
*b = temp;
}
}
