#include "lists.h"

/**
 * sum_listint - returns sum of all the data
 * @head: head node
 * Return: sum of data
*/
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
