#include "main.h"

/**
 *times_table - Prints the 9 times table starting from 0
 *
 */
#include "main.h"

void times_table(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int product = i * j;

if (product >= 10)
{
_putchar('0' + (product / 10));
_putchar('0' + (product % 10));
}
else
{
_putchar('0' + product);
}

_putchar(',');
_putchar(' ');
}

_putchar('\n');
}
}
