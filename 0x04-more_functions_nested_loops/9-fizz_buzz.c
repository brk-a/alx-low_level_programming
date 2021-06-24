#include <stdio.h>
#include <stdlib.h>

/**
 * main - take the fizz-buzz challenge
 *
 * Return: Always 0
 */

int main(void)
{
int i = 1;
while (i < 101)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
putchar(32);
i++;
}
putchar(10);
}
