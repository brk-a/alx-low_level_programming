#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - calls a fn given a param on each element of arr
 * @array: int arr
 * @size: size of arr
 * @action: fn ptr
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
action(array[i]);
}
