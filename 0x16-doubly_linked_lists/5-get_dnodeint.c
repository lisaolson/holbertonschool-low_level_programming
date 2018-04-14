#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of linked list
 * @head: pointer to head
 * @index: index of node to return
 * Return: nth node of list
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int len = 0;
	dlistint_t *new = head;

	if (new == NULL)
		return (NULL);

	while (head != NULL)
	{
		head = head->next;
		len++;
	}

	if (index > len)
		return (NULL);

	while (i < index)
	{
		i++;
		new = new->next;
		if (new == NULL)
			return (NULL);
	}

	return (new);
}
