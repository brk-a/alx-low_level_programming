#include "holberton.h"

/**
* is_prime_number - see if input is a prime number
* @n: input
*
*
*Return: 1 if prime, 0 otherwise
*/

int is_prime_number(int n)
{
return (n < 2 ? 0 : prime_check(2,n));
}


/**
* prime_check - checks for any factor of y starting from x
* @x: start point
* @y: number to check
*
*Return: 1 if y is prime, 0 otherwise
*/

int prime_check(int x, int y)
{
return (x > y ? 1 : y % x && prime_check(x + 1, y));
}
