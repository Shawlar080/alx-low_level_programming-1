#include "main.h"

/**
* main - a program that prints the numbers from 1 to 100
* Return: Always 0
*/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("%c ", Fizz);
}
else if (i % 5 == 0)
{
printf("%c ", Buzz);
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("%c ", FizzBuzz);
}
else
{
printf("%d ", i);
}
printf('\n');
}
}
