#include <stdio.h>

/**
* main-Entry point and prints the alphabet in lowercase & uppercase
* @void: parameter
* Return: 0 (always)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
