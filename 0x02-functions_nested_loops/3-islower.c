#include "holberton.h"

/**
 * _islower - check for lowercase
 * Decsription: see if an ascii character is in the range 97 to 122 inclusive
 *@i:counter
 * Return: 1 if lowercase 0 otherwise
 */

int _islower(int i)
{
if (i >= 97 && i  <= 122)
{
return (1);
}
else
{
return (0);
}
}
