#include "holberton.h"

/**
* _strcmp - function that...
*@s1: input string
* @s2: string to compare with
* Return: 0 if no match, 1 otherwise
*/

int _strcmp(char *s1, char *s2)
{

int i = 0, arr[1000] = {0}, *ptr, sum = 0;
ptr = &sum;

while (*(s2 + i) != '\0')
{
arr[i] = (*(s1 + i) == *(s2 + i)) ? 1 : 0;
i++;
}

for (; i >= 0; i--)
{
*ptr += arr[i];
}

return ((*ptr == 0) ? 0 : 1);
}
