#include <stdio.h>

/**
 * main - prints Holberton
 *
 * Description: print the word Holberton
 *
 * Return: 0 (Success)
 */


int main(void)
{
char word[10] = "Holberton";
int i;

for (i = 0; i < 9; i++)
{
_putchar(word[i]);
}
_putchar(10);

return (0);
}
