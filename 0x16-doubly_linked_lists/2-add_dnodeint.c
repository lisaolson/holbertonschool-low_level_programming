#include "lists.h"

/**
 * dlistint_t - adds new node at the beginning of list
 * @head: double pointer to head node
 * @n: int from struct
 * Return: node with added nodes
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*unsigned int i = 0;*/

	dlistint_t *new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = new;
	new->next = *head;
	*head = new;

	return (new);
}
