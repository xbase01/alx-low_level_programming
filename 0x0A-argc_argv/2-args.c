#include <stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: argument counter
 * @argv: argument vector
 * Return: returns 0 if successful
 */
int main(int argc, char *argv[])
{
int i;

if (argc > 0)
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

}
return (0);
}
