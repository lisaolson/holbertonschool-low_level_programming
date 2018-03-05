#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer to head
 * Return: Nothing
*/
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *current = (*head)->next;

		free(*head);
		*head = current;
	}
}
