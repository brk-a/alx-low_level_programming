#include <stdio.h>

/**
 * main - print all the numbers of base 16
 *
 * Description: print all the numbers of base 16 in lowercase,
 *followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j;
i = 48;
j = 97;
while (i < 58)
{
putchar(i);
i++;
}
while (j < 103)
{
putchar(j);
j++;
}
putchar(10);
    
return 0;
}
