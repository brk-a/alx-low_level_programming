#include "lists.h"
#include <stdio.h>

void __attribute__((constructor)) first(void);

/**
 * first - print str before main()
 * Return: void
 */

void first(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
