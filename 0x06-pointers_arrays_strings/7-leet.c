#include "holberton.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string array
 * Return: string array
 */

char *leet(char *s)
{
char *s_tmp = s, htab[256] = {0}, *map = "A4a4E3e3O0o0T7t7L1l1";
for (; *map; map += 2)
{
htab[(int)*map] = map[1];
}
for (; *s; s++)
{
*s = (htab[(int)*s] != 0) * htab[(int)*s] + (htab[(int)*s] == 0) * *s;
}

return (s_tmp);
}
