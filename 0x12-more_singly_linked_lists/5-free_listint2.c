#include "lists.h"

/**
*/
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *current = (*head)->next;
		free(*head);
		*head = current;
	}
	return;
}
