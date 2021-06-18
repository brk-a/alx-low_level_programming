#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 97;/*Value of 'a' on ASCII chart is 97*/

while (i < 123)/*Value of 'z' on ASCII chart is 123*/
{
putchar(i);
i++;
}
putchar(10);
return (0);
}
