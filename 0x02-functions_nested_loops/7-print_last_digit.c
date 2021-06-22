#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i:integer
 *
 * Description: prints the last digit of a number
 *
 * Return: int
 */

int print_last_digit(int i)
{
int last = i % 10;
if (i < 0)
{
last *= -1;
}
_putchar(last + '0');

return (last);
}
