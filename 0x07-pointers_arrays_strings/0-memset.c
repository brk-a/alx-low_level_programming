#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string array
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

while (i == 0, i < n)
{
s[i] = b;
i++;
}

return (s);
}
