#include "main.h"

/**
 * _sqrt - compute the square root of a number
 *
 * @num: the number to compute
 * @i: number to test for square root
 *
 * Return: square root of @num, or -1 if no root found
 */
int _sqrt(int num, int i)
{
if (i * i > num)
return (-1);
else if (i * i == num)
return (i);
return (_sqrt(num, i + 1));
}
/**
 * _sqrt_recursion - compute the sqrt of a number
 *
 * @num: the number to compute
 *
 * Return: return value from _sqrt
 */
int _sqrt_recursion(int num)
{
return (_sqrt(num, 1));
}
