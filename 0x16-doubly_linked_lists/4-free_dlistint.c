#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: pointer to head node
 * Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *last;

	while(head != NULL)
	{
		last = head;
		head = head->next;
		free(last);
	}
}
