#include "main.h"
/**
 *more_numbers - prints x10 number
 *Return: Returns void
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i <= 14; i++)
{
for (j = 0; j < 15; j++)
{
if (j >= 10)
{
_putchar('0' + j / 10);
}
_putchar('0' + j % 10);
}
_putchar('\n');
}
}
