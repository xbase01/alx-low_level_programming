#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - checks if a string contains only digits
 * @str: string to check
 * Return: 1 if str contains only digits, return 0 if successful
 */

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

/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: return 0 if successful
 */

int main(int argc, char *argv[])
{
int i;
int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (is_digit(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);

return (0);
}
