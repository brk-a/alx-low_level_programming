#include "holberton.h"
#include <stdio.h>

/**
 * main - displayss the number of args passed into it
 * @argc: number of args
 * @argv: array containing args
 * Return: (0)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
