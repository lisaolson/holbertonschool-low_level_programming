#include "lists.h"

/**
*/
int sum_dlistint(dlistint_t *head)
{
	int a;

	while (head != NULL)
	{
		a += head->n;
		head = head->next;
	}

	return (a);
}
