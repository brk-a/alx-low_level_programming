#include "holberton.h"

/**
 * print_square - draws a square
 * @size: length and width of square
 *
 * Return: void
 */

void print_square(int size)
{
int i = 0;
int j = 0;
while (i < size)
{
while (j < size)
{
_putchar(35);
j++;
}
j = 0;
i++;
_putchar(10);
}
}
