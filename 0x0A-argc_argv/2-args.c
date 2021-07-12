#include "holberton.h"
#include <stdio.h>

/**
 * main - displays all args it receives
 * @argc: number of args
 * @argv: array containing args
 * Return: (0)
 */

int main(int argc, char *argv[])
{
int i = 0;

while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
