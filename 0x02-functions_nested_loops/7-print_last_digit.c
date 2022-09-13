#include "main.h"

/**
* print_last_digit - print the last digit of a number
* @x: int type number
* Return: return value of last digit
*/

int print_last_digit(int x)
{
int last_digits;
last_digits = x % 10;
if (x > 0 || x < 0)
{
_putchar('0' + last_digits);
_putchar('\n');
}
return (0);
}
