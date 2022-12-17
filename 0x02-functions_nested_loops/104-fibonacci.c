#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - prints fibonnaci numbers
 *
 * Description: This function prints the fibonnaci
 * from 1 to 98
 *
 * Return: 0 Success
 */
int main(void)
{
unsigned long int frnt1 = 0, bck1 = 1, frnt2 = 0, bck2 = 2;
unsigned long int hold1, hold2, hold3;
int cunt;

printf("%lu, %lu, ", bck1, bck2);
for (cunt = 2; cunt < 98; cunt++)
{
if (bck1 + bck2 > LARGEST || frnt2 > 0 || frnt1 > 0)
{
hold1 = (bck1 + bck2) / LARGEST;
hold2 = (bck1 + bck2) % LARGEST;
hold3 = frnt1 + frnt2 + hold1;
frnt1 = frnt2, frnt2 = hold3;
bck1 = bck2, bck2 = hold2;
printf("%lu%010lu", frnt2, bck2);
}
else
{
hold2 = bck1 + bck2;
bck1 = bck2, bck2 = hold2;
printf("%lu", bck2);
}
if (cunt != 97)
printf(", ");
}
printf("\n");
return (0);
}
