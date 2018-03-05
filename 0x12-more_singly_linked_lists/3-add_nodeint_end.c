#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of list
 * @head: double pointer to first node
 * @n: number of elements
 * Return: address of new element or NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int i = 0;
	listint_t *current;

	listint_t *new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	current = *head;

	while (i < n)
		i++;

	new->n = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
	}
	current->next = new;

	return (new);
}
