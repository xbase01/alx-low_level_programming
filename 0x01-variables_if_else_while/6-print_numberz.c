#include <stdio.h>

/**
* main-Entry point and prints number 1 to 9 using putchar
* @void: parameter
* Return: 0 (always)
*/
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		putchar(number + '0');

	putchar('\n');

	return (0);
}
