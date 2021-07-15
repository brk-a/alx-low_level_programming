#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - returns str length
 * @string: str input
 * Return: length (int)
 */

int _strlen(char *string)
{
int length = 0;
while (string[length] != '\0')
{
length++;
}
return (length);
}

/**
 * string_nconcat - cats two strs
 * @s1: str 1
 * @s2: str 2
 * @n: int that dets how s2 will be used
 * Return: ptr to alloc8d mem corresponding with the str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int length1, length2, lengthc, i, j;
char *str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
length1 = _strlen(s1);
length2 = _strlen(s2);

if (n >= length2)
lengthc = length1 + length2 + 1;
else
{
lengthc = length1 + n + 1;
length2 = n;
}
str = malloc(lengthc);
if (str == NULL)
return (NULL);

i = 0;
while (i < length1)
{
str[i] = s1[i];
i++;
}
j = 0;
while (j < length2)
{
str[i + j] = s2[j];
j++;
}
str[i + j] = '\0';
return (str);
}
