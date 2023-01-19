#include "3-calc.h"

/**
 * op_add - sum a and b
 * @a: first number
 * @b: second number
 * Return: returns the sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - checks the difference between a and b
 * @a: first number
 * @b: second number
 * Return: returns the difference between a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiply a by b
 * @a: first number
 * @b: second number
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first number
 * @b: second number
 * Return: returns the quotient of a and b excluding remainder
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - calculate the remainder of a and b
 * @a: first number
 * @b: second number
 * Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
return (a % b);
}
