#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all parameters
 * @n: number parameters to sum
 * Return: returns sum of all parameters when successful or zero otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
va_list valist;
int sum = 0;
unsigned int i;

if (n == 0)
return (0);

va_start(valist, n);

for (i = 0; i < n; i++)
sum += va_arg(valist, int);

va_end(valist);
return (sum);
}
