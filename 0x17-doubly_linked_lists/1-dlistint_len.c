#include "lists.h"

/**
 * dlistint_len - returns the num of elems in a dlistint_t list
 * @h: head of doubly linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
int i = 0;

 while (h)
{
i++;
h = h->next;
}
return (i);
}
