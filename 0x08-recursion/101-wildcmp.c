#include "holberton.h"

/**
*wildcmp - checks whether 2 strings match
*@s1: a string
*@s2: a string pattern
*
*
*Return: 1 if match, 0 otherwise
*/

int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if(*s1 == '\0' || *(s2 + 1) == '*')
{
return (wildcmp(s1, s2 + 1));
}
else if (wildcmp(s1, s2 + 1))
{
return (1);
}
return (wildcmp(s1 + 1, s2));
}
else if (*s2 == '\0')
{
return (*s1 == '\0');
}
return (*s1 == *s2 && wildcmp(s1 + 1, s2 + 1));
}
