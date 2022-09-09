#include <stdio.h>

/**
*main - main block
*Description: a program that prints all possible different combinations
*of three digits.
*Numbers must be separated by ,, followed by a space
*The three digits must be different
*012, 120, 102, 021, 201, 210 are considered the same
*combination of the three digits 0, 1 and 2
*Print only the smallest combination of three digits
*Numbers should be printed in ascending order, with three digits
*You can only use the putchar function (every other function
*(printf, puts, etc…)is forbidden)
*You can only use putchar six times maximum in your code
*You are not allowed to use any variable of type char
*Return: 0
*/

int main(void)
{
int x, y, z;
for (x = 48; x < 58; x++)
{
for (y = 49; y < 58; y++)
{
for (z = 50; z < 58; z++)
{
if (y > x && z > y)
{
putchar(x);
putchar(y);
putchar(z);
if (x != 55 || y != 56 || z != 57)
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar('\n');
return (0);
}

