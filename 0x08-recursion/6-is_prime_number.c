#include "main.h"

/**
 * is_prime_number - returns 1 if n is a prime number, 0 otherwise
 * @n: number to check if prime
 * Return: 1 if n is a prime number, 0 otherwise
*/
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - helper function to determine if n is a prime number
 * @n: number to check if prime
 * @i: current number to divide n by
 * Return: 1 if n is a prime number, 0 otherwise
*/

int check_prime(int n, int i)
{
if (n <= 1)
{
return (0);
}
if (i == n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (check_prime(n, i + 1));
}
