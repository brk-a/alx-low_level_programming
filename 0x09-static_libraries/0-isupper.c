#include "holberton.h"

/**
 * _islower - check for lowercase
 * Decsription: see if an ascii character is in the range 65 to 90 inclusive
 *@i:counter
 * Return: 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
