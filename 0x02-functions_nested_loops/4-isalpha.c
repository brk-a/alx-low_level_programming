#include "holberton.h"

/**
 * _isalpha - checks for alphabets
 *Description: check if  an ascii character is a letter
 *
 * Return: 1 (if letter) 0 otherwise
 */

int _isalpha(int i)
{
if (i >= 97 && i <= 122 || i >= 65 && i <= 90)
{
return (1);
}
else
{
return (0);
}
}
