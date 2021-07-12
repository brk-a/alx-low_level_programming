#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - display product of two numbers
 * @argc: number of args
 * @argv: array containing args
 * Return: 0 if both numbers are provided, 1 otherwise
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
}
