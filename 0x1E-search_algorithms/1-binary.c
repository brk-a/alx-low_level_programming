#include "search_algos.h"

/**
 * print_subarray - prints a sub-arr
 * @array: ptr to arr
 * @first: idx of first elem to print
 * @last: idx of last elem to print
 */

void print_subarray(int *array, size_t first, size_t last)
{
size_t i = 0;

printf("Searching in array: ");
for (i = first; i < last; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[i]);
}

/**
* binary_search - search for value in sorted int array using Binary search algo
* @array: ptr to int arr
* @size: size of arr
* @value: val to find
* Return: idx of first match or -1 if not found
*/

int binary_search(int *array, size_t size, int value)
{
size_t first = 0;
size_t last = 0;
size_t mid = 0;

if (array == NULL || size == 0)
return (-1);

last = size - 1;

while (first <= last)
{
print_subarray(array, first, last);
mid = (first + last) / 2;
if (array[mid] > value)
last = mid - 1;
else if (array[mid] < value)
first = mid + 1;
else
return (mid);
}
return (-1);
}
