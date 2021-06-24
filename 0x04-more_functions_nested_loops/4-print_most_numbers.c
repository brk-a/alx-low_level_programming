#include "holberton.h"

/**
 * print_most_numbers - prints numbers 0-9 except 2,4
 *
 * Return: void
 */

void print_most_numbers(void)
{
int i = 48;
while (i < 58)
{
if (i != 50 && i != 52)
{
_putchar(i);
}
i++;
}
_putchar(10);
}
