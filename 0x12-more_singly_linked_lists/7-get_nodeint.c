#include "lists.h"

/**
 * *get_nodeint_at_index - returns nth node
 * @head: pointer to head of list
 * @index: index of node to return
 * Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *current = head;

	if (index == 0)
		return (NULL);

	while (current != NULL)
	{
		if (i == index)
		{
			return (current->n);
		}
		i++;
		current = current->next;
	}

	return (NULL);
}
