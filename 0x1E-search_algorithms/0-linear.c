#include "search_algos.h"

/**
* linear_search - searches for a val in arr of int w/linear search algo
* @array: ptr to arr of ints
* @size: size of arr
* @value: val to find
* Return: index of first match
*/

int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (array == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
