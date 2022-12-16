#include <stdio.h>
#include <math.h>
/**
 *main: prints the largest prime factor of 612352475143
 *Return: Returns void
 */

int main(void)
{
long long num = 612852475143;
long long largest_prime_factor = 1;
long long i;

while (num % 2 == 0)
{
largest_prime_factor = 2;
num /= 2;
}

for (i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
{
largest_prime_factor = i;
num /= i;
}
}

if (num > 2)
{
largest_prime_factor = num;
}

printf("%lld\n", largest_prime_factor);
return (0);
}
