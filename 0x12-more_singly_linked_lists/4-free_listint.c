#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head node
 * Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
