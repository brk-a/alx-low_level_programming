#include "holberton.h"

/**
 * _islower - check for lowercase
 * Decsription: check if  an ascii character is in lowercase (range 97 to 122 inclusive)
 *
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
