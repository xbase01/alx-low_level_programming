#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point
 *
 * @argc: command line argument count
 * @argv: arguments as string arrays
 *
 * Description: multiply two integers from command line arguments
 *
 * Return: 0 (success), 1 (failure)
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
