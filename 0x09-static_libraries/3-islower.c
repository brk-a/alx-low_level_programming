#include "holberton.h"

/**
 * _islower - checks for uppercase
 * @c: character to checked for case
 *
 * Return: 1 if lowercase, 0 if not uppercase
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
