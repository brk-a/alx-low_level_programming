#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an arr of ints
 * @min: min int
 * @max: max int
 * Return: ptr to alloc8d mem
 */

int *array_range(int min, int max)
{
int *arr, diff, num, j;

if (min > max)
return (NULL);
diff = max - min + 1;
arr = malloc(diff *sizeof(int));
if (arr == NULL)
return (NULL);

for (num = min, j = 0; num <= max && j < diff; num++, j++)
arr[j] = num;

return (arr);
}
