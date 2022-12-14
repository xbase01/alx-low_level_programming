#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet in lowercase
*
*Return = void
*/

void print_alphabet_x10(void)
{
int i, j;
char ch;

for (i = 0; i < 10; i++)
{
ch = 'a';
for (j = 0; j < 26; j++)
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
}
