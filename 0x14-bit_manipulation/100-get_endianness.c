#include <stdio.h>
#include "main.h"
/**
 * get_endianness - Checks the sys byte order
 * Return: Returns 0 if big endian 1 if lil endian
 */
int get_endianness(void)
{
int x;
int wee_or_big;

x = 1;
wee_or_big = (int) (((char *)&x)[0]);
return (wee_or_big);
}
