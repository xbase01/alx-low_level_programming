#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - prints all natural number from n to 98.
 *@n: character to start print
 *Return: return void
 */
void print_to_98(int n)
{
do {
printf("%d, ", n);
n++;
} while (n < 98);
printf("98\n");
}
