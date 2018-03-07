#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of list
 * @head: double pointer to first node
 * @index: node that should be deleted
 * Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *tmp, *new;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (c < index - 1)
	{
		if (tmp == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
		c++;
	}

	new = tmp->next;
	tmp->next = new->next;
	free(new);

	return (1);
}
