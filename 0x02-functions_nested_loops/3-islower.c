#include "main.h"

/**
*_islower - checks if a character is lowercase character
*
*@c: the character to check
*
*Return: 1 if true or 0 if false
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
