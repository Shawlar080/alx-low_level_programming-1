#include "main.h"

/**
* print_last_digit - print the last digit of a number
* @x: int type number
* Return: return value of last digit
*/

int print_last_digit(int x)
{
int last_digits;

if (x > 0)
{
last_digits = x % 10;
_putchar('0' + last_digits);
_putchar('\n');
return (last_digits);
}
else
{
last_digits = -1 * (x % 10);
_putchar('0' + last_digits);
_putchar('\n');
return (last_digits);
}
}
