#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
if (*s == '\0')
{
return (1);
}
return (check_palindrome(s, s + _strlen_recursion(s) - 1));
}

/**
 * check_palindrome - helper function to check if a string is a palindrome
 * @s: string to check
 * @t: pointer to the end of the string
 * Return: 1 if s is a palindrome, 0 otherwise
*/
int check_palindrome(char *s, char *t)
{
if (t < s)
return (1);
if (*s != *t)
{
return (0);
}
return (check_palindrome(s + 1, t - 1));
}

/**
 * _strlen_recursion - compute the length of a string
 *
 * @s: the string to be processed
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
int length = 1;

if (*s == '\0')
return (0);
return (length + _strlen_recursion(s + 1));
}
