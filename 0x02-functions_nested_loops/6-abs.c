#include "holberton.h"

/**
 * _abs - returns the absolute value of an integer
 * @i: counter
 *
 * Return: int
 */

int _abs(int i)
{
if (i >= 0)
{
return (i);
}
else
{
return (-i);  /* Double negative rule in maths */
}
}
