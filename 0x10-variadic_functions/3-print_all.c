#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything passed to it
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
  va_list valist;
  char *s;
  int i = 0;
  va_start(valist, format);
  while (format && format[i])
    {
      switch (format[i])
	{
	case 'c':
	  printf("%c", va_arg(valist, int));
	  
