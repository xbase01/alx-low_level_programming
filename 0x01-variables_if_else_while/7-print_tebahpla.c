#include <stdio.h>

/**
* main-Entry point and prints the alphabet in lowercase in reverse
* @void: parameter
* Return: 0 (always)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
