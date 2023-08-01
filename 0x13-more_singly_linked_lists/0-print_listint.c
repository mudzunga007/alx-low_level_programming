#include "lists.h"

/**
* print_listint - will print all the elements of a linked list
* @h: iis the linked list of type listint_t to print
* Return: will be number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->q);
num++;
h = h->next;
}

return (num);
}
