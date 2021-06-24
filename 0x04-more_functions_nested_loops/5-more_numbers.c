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
while(i < 10)
{
while(j < 15)
{
_putchar(j);
j++;
}
j = 0;
_putchar(10);
i++;
}
}
