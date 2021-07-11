#include "holberton.h"

/**
 * _strcmp - function that...
 *@s1: input string
 * @s2: string to compare with
 * 
 * Return: 0 if no match, 1 otherwise
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
if (*(s1+i) != *(s2 + i))
{
return (0);
}
else
{
return(1);
}
}
