#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: int
 * @index: index to set 1
 * Return: 1 on success, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (index >= (sizeof(*n) * 8))
return (-1);
mask = 1;
*n = *n | (mask << index);

return (1);
}
