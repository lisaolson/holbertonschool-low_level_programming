#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @value: value associated with the key
 * @key: key to insert
 *
 * Return: 1 if succeeded, 0 if failed
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = 0;
	unsigned int size = 0;
	hash_node_t *new;
	hash_node_t *temp;

	if (ht == NULL)
		return (0);
	if (ht->size == 0)
		return (0);

	size = ht->size;
	if (key[0] == '\0' || key == NULL)
		return (0);

	if (value[0] == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		ht->array[index]->key = strdup(key);
		ht->array[index]->value = strdup(value);
		return (1);
	}

	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			ht->array[index]->value = strdup(value);
			return (1);
		}
		ht->array[index] = ht->array[index]->next;
	}
	temp = ht->array[index];
	ht->array[index] = new;
	ht->array[index]->key = strdup(key);
	ht->array[index]->value = strdup(value);
	ht->array[index]->next = temp;

	return (1);
}
