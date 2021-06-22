#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 *
 * Description: prints the last digit of a number
 *
 * Return: int
 */

int print_last_digit(int n)
{
int last = n % 10; /* The remainder of a base 10 number, +ve or -ve, /10 is always the last digit of said number */
_putchar(last + '0');

return (last);
}
