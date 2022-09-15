#include "main.h"

/**
* print_triangle - a function that prints a triangle, followed by a new line.
* Description: Use the character # to print the triangle
* @size: size of triangle
*/

void print_triangle(int size)
{
int x, i, j;
x = 0;
i = size - 1;
while (x < size)
{
i = size - x;
j = x + 1;
while (i > 0)
{
_putchar('');
i--;
}
while (j > 0)
{
_putchar('#');
j--;
}
_putchar('\n');
x++;
}
if (size <= 0)
{
_putchar('\n');
}
}
