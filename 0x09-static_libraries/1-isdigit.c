#include "holberton.h"

/**
 * _islower - check for lowercase
 * Decsription: see if an ascii character is in the range 97 to 122 inclusive
 *@c:counter
 * Return: 1 if digit 0 otherwise
 */

int _islower(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
