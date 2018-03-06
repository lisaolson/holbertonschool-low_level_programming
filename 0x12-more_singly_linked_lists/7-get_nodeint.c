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

	if (current == NULL)
		return (NULL);

	while (i < index)
	{
		i++;
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	return (current);
}
