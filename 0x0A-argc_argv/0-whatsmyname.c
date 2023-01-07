#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name followed by new line
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{

printf("%s\n", argv[0]);
if (argc > 1)
printf("%d\n", argc);
return (0);
}
