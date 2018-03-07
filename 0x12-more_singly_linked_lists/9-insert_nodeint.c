#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to head
 * @idx: index of the list where new node should be added
 * @n: integer brought in from struct
 * Return: address of new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c = 0;
	listint_t *tmp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	while (c < idx - 1)
	{
		tmp = tmp->next;
		c++;
	}

	new->n = n;
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
