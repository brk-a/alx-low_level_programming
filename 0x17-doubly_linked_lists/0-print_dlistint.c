#include "lists.h"

/**
 * print_dlistint - prints all elems of a dlistint_t list
 * @h: head of doubly linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
int i = 0;

while (h)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}
