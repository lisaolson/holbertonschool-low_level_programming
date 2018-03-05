#include "lists.h"

/**
 * print_listint - print all elements of list
 * @h: elements of node
 * Return: Number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
