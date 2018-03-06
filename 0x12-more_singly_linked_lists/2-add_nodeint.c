#include "lists.h"

/**
 * add_nodeint - adds a new node to beginning of list
 * @head: double pointer to start of list
 * @n: number of elements in list
 * Return: address of new element or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
