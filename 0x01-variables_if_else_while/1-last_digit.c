#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main-Entry point
* @void: parameter
* Return: 0 (success)
*/
int main(void)
{
	int n;
	int lasdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (lasdigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lasdigit);
	else if (lasdigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lasdigit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lasdigit);
	return (0);
}
