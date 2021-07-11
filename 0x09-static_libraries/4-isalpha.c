#include "holberton.h"

/**
 * _isalpha - checks for alphabets
 *Description: check if  an ascii character is a letter
 *@c: input
 * Return: 1 (if letter) 0 otherwise
 */

int _isalpha(int c)
{
return (((c >= 97 && c <= 122) || (c >= 65 && c <= 90)) ? 1 : 0);
}
