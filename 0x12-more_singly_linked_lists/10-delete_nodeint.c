#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of list
 * @head: double pointer to first node
 * @index: node that should be deleted
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new = *head;

	if (*head == NULL)
		return (-1);

	if (i == index && new != NULL)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	while (new != NULL && i < index)
	{
		new = new->next;
		i++;
	}

	if (new == NULL)
		return (-1);

	free(new);
	return (1);
}
