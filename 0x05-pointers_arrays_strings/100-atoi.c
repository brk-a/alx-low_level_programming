#include "holberton.h"

/**
* _atoi - convert a string to an integer
* @s: string to convert
* Return: int: value of converted string
*/

int _atoi(char *s)
{
int num = 0;
char neg = 0;
char allow_any = 1;

while (*s != 0 && (allow_any || (*s >= 48 && *s <= 57)))
{
if (*s >= 48 && *s <= 57)
{
allow_any = 0;
num = num * 10 (neg ? -(*s - '0') : (*s - '0'));
}
else if (*s == '-')
{
neg = ! neg;
s++;
}
}
return (num);
}

