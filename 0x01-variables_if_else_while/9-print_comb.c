#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print all possible combinations of single digit numbers +commas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

i = 48;

while (i < 58)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
i++;
}

return (0);
}
