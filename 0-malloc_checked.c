#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - alloc8s mem using malloc
 * @b: size of mem to alloc8
 * Return: ptr to alloc8d mem
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
