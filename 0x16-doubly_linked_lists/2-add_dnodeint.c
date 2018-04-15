#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of list
 * @head: double pointer to head node
 * @n: int from struct
 * Return: node with added nodes
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
