#include "lists.h"

/**
 * add_node - adds node to beginning of list
 * @head: double pointer to first node
 * @str: pointer string to list
 * Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;

	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new->len = i;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (*head);
}
