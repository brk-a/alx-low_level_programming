#include "holberton.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
int i = 0;
int j = 0;
while (i < 10)
{
while (j < 15)
{
if(j < 10)
{
_putchar(j + '0');   
}
else
{
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
}
j++;
}
j = 0;
_putchar(10);
i++;
}
}
