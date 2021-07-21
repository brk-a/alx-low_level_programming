#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an int
 * @array: int arr
 * @size: size of arr i.e no. of members
 * @cmp: fn ptr
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i, result;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);


for (i = 0; i < size; i++)
{
result = cmp(array[i]);
return ((result) ? i : -1);
}
}
