#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: length of sides minus hypotenuse
 *
 * Return: void
 */

void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar(10);
}
else
{
while (i < size)
{
for (j = n - 1; j > i; j--)
{
_putchar(32);
}
for (k = 0; k < i - 1; k++)
{
_putchar(35);
}
_putchar(10);
i++;
}
}
}
