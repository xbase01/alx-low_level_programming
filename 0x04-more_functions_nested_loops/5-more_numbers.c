#include "main.h"
/**
 *more_numbers - prints x10 number
 *Return: Returns void
 */
void more_numbers(void);
{
int i, c;

for (i = 0; i <= 14; i++)
{
c = (i * 10);
_putchar('0' + i);
}
_putchar('\n');
}
