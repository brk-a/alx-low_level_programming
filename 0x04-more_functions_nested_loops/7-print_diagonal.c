#include "holberton.h"

/**
 * print_diagonal - draws diagonal line
 * @n: number of times
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i = 0;
int j;
if (n <= 0)
{
_putchar(10);
}
else
{
while (i < n)
{
for (j = 0; j < i; j++)
{
_putchar(32);
}
_putchar(92);
_putchar(10);
i++;
}
}
}
