#include "lists.h"

/**
 * list_len - counts number of elements in list
 * @h: pointer to linked list
 * Return: length of list
*/
size_t list_len(const list_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
