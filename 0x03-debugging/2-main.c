#include <stdio.h>
#include "main.h"

/*Declare the largest_number() function */
int largest_number(int a, int b, int c);

/**
 * main - prints the largest of 3 integers
 * Return: 0
 */

int main(void)
{
  int a, b, c;
  int largest;

  a = 972;
  b = -98;
  c = 0;

  largest = largest_number(a, b, c);

  printf("%d is the largest number\n", largest);

  return (0);
}

