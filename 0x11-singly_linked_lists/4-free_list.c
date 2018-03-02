#include "lists.h"

/**
 * free_list - free list_t list
 * @head: pointer to head
 * Return: Nothing
*/
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
