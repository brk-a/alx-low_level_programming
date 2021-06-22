#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
int i = 0;
char letter;

while (i < 10) /* 0 - 9 is 10 iterations */
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
i++;
}
}
