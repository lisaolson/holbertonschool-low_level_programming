#include "lists.h"

/**
 * add_node_end - adds node to the end of list
 * @head: head of list
 * @str: pointer string
 * Return: new list or NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *tmp;

	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	tmp = *head;

	while (str[i] != '\0')
		i++;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
	}
	tmp->next = new;

	return (new);
}
