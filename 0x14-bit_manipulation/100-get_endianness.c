#include <stdio.h>
#include "main.h"
/**
 * get_endianness - Checks the systems Byte order
 * Return: Returns 0 if big endian 1 if lil endian
 */
int get_endianness(void)
{
int x;
int little_or_big;

x = 1;
lil_or_big = (int) (((char *)&x)[0]);
return (lil_or_big);
}
