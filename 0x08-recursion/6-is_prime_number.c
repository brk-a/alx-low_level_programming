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

int i = 2;

if (n <= 2)
return ((n == 2) ? 1 : 0);
if (n % i == 0)
return (1);
if (i * i > n)
return (0);

i += 1;
return (is_prime_number(n));
}
