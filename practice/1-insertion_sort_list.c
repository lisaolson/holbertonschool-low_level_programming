#include "sort.h"
#include <stdio.h>

void insertion_sort_list(listint_t **list)
{
	listint_t *outer;
	listint_t *inner;
	listint_t *temp;

	if (list == NULL)
		return;

	for (outer = *list; outer != NULL; outer = outer->next)
	{
		temp = outer;
		for (inner = temp->prev; (inner != NULL && (inner->n > temp->n)); inner = temp->prev)
		{
			if (inner->prev == NULL)
			{
				temp->prev = NULL;
				inner->next = temp->next;
				inner->prev = temp;
				if (temp->next != NULL)
				{
					temp->next->prev = inner;
				}
				temp->next = inner;
				*list = temp;
				break;
			}
			if (temp->next == NULL)
			{
				temp->next = inner;
				temp->prev = inner->prev;
				inner->next = NULL;
				inner->prev->next = temp;
				inner->prev = temp;
				break;
			}
			if (inner->prev != NULL && temp->next != NULL)
			{
				inner->prev->next = temp;
				temp->next->prev = inner;
				inner->next = temp->next;
				temp->prev = inner->prev;
				temp->next = inner;
				inner->prev = temp;
				break;
			}
		}
		print_list(*list);
	}
}
