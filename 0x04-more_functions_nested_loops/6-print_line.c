#include "holberton.h"

/**
 * print_line - prints a line of _ n long
 * @n: length of line
 *
 * Return: void
 */

void print_line(int n)
{
int i = 0;
if (n <= 0)
{
_putchar(10);
}
else
{
while (i < n)
{
_putchar('_');
i++;
}
_putchar(10);
}
}
