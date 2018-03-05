#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 * @head: double pointer to first node
 * Return: head node's data or 0
*/
int pop_listint(listint_t **head)
{
	int c = -1;

	listint_t *next = NULL;

	if (*head == NULL)
		return (0);

	next = (*head)->next;
	c = (*head)->n;
	free(*head);
	*head = next;

	return (c);
}
