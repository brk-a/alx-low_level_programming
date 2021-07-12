#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - checks if input is a number
 * @s: input
 * Return: 1 if it is a number, 0 if not
 */

int is_number(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) >= '0' && *(s + i) <= '9')
{
i++;
}
else
{
return (0);
}
}
return (1);
}

/**
 * main - prints the sum of positive numbers
 * @argc: number of args
 * @argv: array containing args
 * Return: (0)
 */

int main(int argc, char *argv[])
{
int i, sum, is_num;

sum = 0;
if (argc == 1)
{
printf("0\n");
}
else if (argc > 1)
{
i = 1;
while (i < argc)
{
is_num = is_number(argv[i]);
if (is_num == 1)
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
i++;
}
printf("%d\n", sum);
}
return (0);
}
