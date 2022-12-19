#include "main.h"
int _atoi(char *s)
{
  int i, sign, result;

  i = 0;
  sign = 1;
  result = 0;

  while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\v' || s[i] == '\f')
    {
      i++;
    }
  if (s[i] == '+' || s[i] == '-')
    {
      sign = (s[i] == '-') ? -1 : 1;
      i++;
    }

  while (s[i] >= '0' && s[i] <= '9')
    {
      result = result * 10 + s[i] - '0';
      i++;
    }

  return (result == 0) ? 0 : sign * result;
}
