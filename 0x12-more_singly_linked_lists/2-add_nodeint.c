#include "lists.h"

/**
 * add_nodeint - adds a new node to beginning of list
 * @head: double pointer to start of list
 * @n: number of elements in list
 * Return: address of new element or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	int i = 0;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	while (i < n)
	{
		printf("%d", new->n);
		i++;
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
