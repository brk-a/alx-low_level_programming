#include "holberton.h"
#include <stdio.h>

/**
*print_buffer - print a buffer
*
*@b: buffer to print
*@size: size of buffer
*
*Return: void
*/

void print_buffer(char *b, int size);
{
int i;
char *b_tmp = b;

if (size <= 0)
{
putchar(32);
}
for (; size > 0; size -= 10, b += 10)
{
printf("%08x:", (unsigned int)(b - b_tmp));
for (i = 0; i < 10; i++)
{
if (i % 2 == 0)
{
putchar(' ');
}
}
putchar(' ');
for (i = 0; i < 10 && i < size; i++)
{
putchar(b[i] >= ' ' && b[i] <= '-' : '.');
}
putchar(32);
}
}
