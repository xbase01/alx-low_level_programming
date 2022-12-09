#include <stdio.h>

/**
* main-Entry point and prints the alphabet in lowercase except q and e
* @void: parameter
* Return: 0 (always)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
			continue;
		else
			putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
