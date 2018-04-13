#include "lists.h"

/**
 * print_dlistint - prints all elements of doubly linked list
 * @h: pointer head node
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}

	return (c);
}
