#include "holberton.h"
#include <math.h>

/**
*print_number: print out an integer
*printDigit : print an int
*@n:integer to print
*
*Return: void
*/

void print_number(int n)
{

/* int i = 0, j; */
/*i = (n == 0) ? 1  : (log10(n) + 1);*/
/* for (j = 0; j < i; j++)*/

int r;

if (n == 0)
{
_putchar(48);
}
else
{
printDigit(n);
_putchar('0' + r);
}

}

int printDigit(int N)
{
int r;
if (N == 0)
{
return (NULL);
}
r = N % 10;
return (printDigit(N / 10));
}
