#include "lists.h"

/**
 * sum_dlistint - returns sum of all data
 * @head: pointer to head
 * Return: sum of all data of doubly linked list
*/
int sum_dlistint(dlistint_t *head)
{
	int a = 0;

	while (head != NULL)
	{
		a += head->n;
		head = head->next;
	}

	return (a);
}
