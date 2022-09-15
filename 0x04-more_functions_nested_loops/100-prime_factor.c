#include <stdio.h>
#include "main.h"

/**
* main - main block
* Description: a program that finds and prints the largest prime factor
*  of the number 612852475143
*  Return: 0
*/

int main(void)
{
int c;
long num = 612852475143;

for (c = (int) sqrt(num); c > 2; c++)
{
if (num % c == 0)
{
printf("%d\n", c);
break;
}
}
return (0);
}
