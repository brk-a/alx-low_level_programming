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
 * bin_search_mod - search for val in sorted int arr w/Binary search algo
 * @array: ptr to int arr
 * @value: val to find
 * @first: first idx of sub-arr
 * @last: last idx of sub-arr
 * Return: idx of first match or -1 if not found
 */

int bin_search_mod(int *array, int value, int first, int last)
{
size_t mid = 0;

while (first <= last)
{
print_subarray(array, first, last);
mid = (first + last) / 2;
if (array[mid] > value)
{
last = mid - 1;
bin_search_mod(array, value, first, last);
}
else if (array[mid] < value)
{
first = mid + 1;
bin_search_mod(array, value, first, last);
}
else
{
if (array[mid - 1] != value)
{
return (mid);
}
while (array[mid] == value)
{
mid -= 1;
}
return (mid + 1);
}
}
return (-1);
}


/**
 * advanced_binary - search for val in sorted int arr w/Binary search algo
 * @array: ptr to int arr
 * @size: size of arr
 * @value: val to find
 * Return: idx of first match or -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
size_t first = 0;
size_t last = 0;

if (array == NULL || size == 0)
{
return (-1);
}

last = size - 1;
return (bin_search_mod(array, value, first, last));

}
