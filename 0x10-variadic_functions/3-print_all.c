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
break;
case 'i':
printf("%d", va_arg(valist, int));
break;
case 'f':
printf("%f", va_arg(valist, double));
break;
case 's':
s = va_arg(valist, char *);
if (!s)
s = "(nil)";
printf("%s", s);
break;
default:
break;
}
if (format[i + 1])
printf(", ");
i++;
}
printf("\n");
va_end(valist);
}

	  
