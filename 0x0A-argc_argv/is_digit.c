#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

int is_digit(char *str)
{
  int i;

  for (i = 0; str[i] != '\0'; i++)
    {
      if (!isdigit(str[i]))
	{
	  return (0);
	}
    }

  return (1);
}
