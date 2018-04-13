#include "lists.h"

/**
 * dlistint_len - returns number of elements in dlistint_t
 * @h: pointer to head node
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}

	return (c);
}
