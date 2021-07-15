#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - realloc's mem block using malloc and free
 * @ptr: ptr
 * @old_size: byte size to be alloc'd
 * @new_size: bytes
 * Return: void ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (new_size == old_size)
return (ptr);
free(ptr);

ptr = malloc(new_size);

return (ptr);
}
