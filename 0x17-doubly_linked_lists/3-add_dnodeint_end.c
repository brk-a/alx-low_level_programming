#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of linked list
 * @n: integer value of node
 *
 * Return: addr of new elem, else, NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

dlistint_t *new;
dlistint_t *temp;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}

new->next = NULL;
new->n = n;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (*head);
}

temp = *head;
while (temp->next)
{
temp = temp->next;
}
temp->next = new;
new->prev = temp;

return (new);
}
