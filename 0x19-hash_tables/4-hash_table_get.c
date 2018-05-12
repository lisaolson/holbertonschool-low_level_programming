#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 *
 * Return: value associated with element or NULL if not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int size;
	unsigned int index;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			return (ht->array[index]->value);
		}
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
