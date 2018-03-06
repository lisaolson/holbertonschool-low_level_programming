#include "lists.h"

/**
 * listint_len - returns number of elements in list
 * @h: poiter to elements in list
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t c;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
