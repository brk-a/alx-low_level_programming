#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of two numbers
 * @a: int
 * @b: int
 * Return: sum (int)
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - difference of two numbers
 * @a: int
 * @b: int
 * Return: difference (int)
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: int
 * @b: int
 * Return: product (int)
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - quotient of two numbers
 * @a: int (dividend)
 * @b: int (divisor)
 * Return: quotient (int)
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - modulo (remainder)
 * @a: int (dividend)
 * @b: int (divisor)
 * Return: remainder of division (int)
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
