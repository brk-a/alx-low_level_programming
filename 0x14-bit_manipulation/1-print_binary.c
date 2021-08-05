#include "main.h"

/**
 * print_binary - prints the bin rep'n of a number
 * @n: int
 * Return: void
 */

void print_binary(unsigned long int n)
{
int on, i;
unsigned long int x;

on = 0;
for (i = 63; i >= 0; i--)
{
x = (n >> i) & 1;
on = (x == 1) ? 1 : 0;
if (on == 1)
_putchar(((n >> i) & 1) + '0');
}
if (n == 0)
_putchar('0');
}
