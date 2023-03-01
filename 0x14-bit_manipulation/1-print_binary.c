#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be represented in binary
 * Return: Void
 */

void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int bit = 0;

while (mask > 0)
{
bit = (n & mask) ? 1 : 0;
printf("%d", bit);
mask >>= 1;
}
}
