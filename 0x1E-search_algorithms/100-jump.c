#include "search_algos.h"
#include <math.h>

/**
 * chck_sarr - checks a sub-arr
 * @array: ptr to arr
 * @size: size of arr
 * @first: idx of first elem to print
 * @last: idx of last elem to print
 * @val: val to match
 * Return: idx of match or -1 if no match
 */

int chck_sarr(int *array, size_t size, size_t first, size_t last, int val)
{
  size_t i = 0;

  for (i = first; i <= last && i < size; i++)
    {
      printf("Value checked array[%lu] = [%d]\n", i, array[i]);
      if (array[i] == val)
	return (i);
    }
  return (-1);
}

/**
 * jump_search - search for value in sorted int arr using jump search algo
 * @array: ptr to arr
 * @size: size of arr
 * @value: val to search
 * Return: idx of match or -1 if no match
 */

int jump_search(int *array, size_t size, int value)
{
  size_t interval = 0;
  size_t i = 0;
  char *message = "Value found between indexes ";

  if (array == NULL || size < 1)
    return (-1);

  interval = sqrt(size);
  for (i = 0; i < size; i += interval)
    {
      if (array[i] == value)
	{
	  printf("%s[%lu] and [%lu]\n", message, i - interval, i);
	  return (chck_sarr(array, size, i - interval, i, value));
	}
      else if (value < array[i])
	{
	  printf("%s[%lu] and [%lu]\n", message, i - interval, i);
	  return (chck_sarr(array, size, i - interval, i, value));
	}
      printf("Value checked array[%lu] = [%d]\n", i, array[i]);

    }
  printf("%s[%lu] and [%lu]\n", message, i - interval, i);
  return (chck_sarr(array, size, i - interval, i, value));
}
