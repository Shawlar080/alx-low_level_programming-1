#include "main.h"

/**
*times_table - prints the 9 times table starting from 0
*Return: Always 0 
*/
void times_table(void)
{
int x, y, z;

for (x = 0; x < 10; x++)
{
for (y = 1; y < 10; y++)
{
z = x * y;
_putchar(z + '0');
}
_putchar('\n');
}
}

