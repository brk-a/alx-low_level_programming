#include "search_algos.h"
#include <math.h>

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
 * bin_search_mod - search for val in sorted int array using Binary search alg
 * @array: ptr to int arr
 * @size: size of arr
 * @value: val to find
 * @first: first idx of sub-arr
 * @last: last idx of sub-arr
 * Return: index of first match or -1 if not found
 */

int bin_search_mod(int *array, size_t size, int value, int first, int last)
{
size_t mid = 0;

if (array == NULL || size == 0)
return (-1);

while (first <= last)
{
print_subarray(array, first, last);
mid = (first + last) / 2;
if (array[mid] > value)
{
last = mid - 1;
}
else if (array[mid] < value)
{
first = mid + 1;
}
else
{
return (mid);
}
}
return (-1);
}

/**
* exponential_search - searches for a val in a sorted arr of
* ints using the Exponential search algo
* @array: ptr to an arr
* @size: size of arr
* @value: val to search
* Return: idx of match or -1
*/

int exponential_search(int *array, size_t size, int value)
{
int bound = 1;
int first = 0;
int last = 0;

if (array == NULL || size == 0)
{
return (-1);
}

while (bound < (int)size && array[bound] < value)
{
printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
bound *= 2;
}
first = bound / 2;
if (bound < (int)size - 1)
{
last = bound;
}
else
{
last = size - 1;
}
printf("Value found between indexes [%d] and [%d]\n", first, last);
return (bin_search_mod(array, size, value, first, last));
}
