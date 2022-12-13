#include "main.h"

/**
 * int_islower - checks for lowercase character
 *
 *Return 1 if true or 0 is false
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return 1;
}
else
{
return 0;
}
}
