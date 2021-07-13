#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - returns len of a str
 * @string: str input
 * Return: len of str
 */

int _strlen(char *string)
{
int length;

length = 0;
while (string[length] != '\0')
{
length++;
}
return (length);
}

/**
 * argstostr - concatenates all the argrs provided
 * @ac: argc - number of args
 * @av: argv - arr of args
 * Return: ptr to new str
 */

char *argstostr(int ac, char **av)
{
int length, i, j, k;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

length = 0;
for (i = 0; i < ac; i++)
{
length += _strlen(av[i]) + 1;
}

str = malloc(sizeof(char) * length + 1);
if (str == NULL)
return (NULL);

k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; j < _strlen(av[i]); j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}
