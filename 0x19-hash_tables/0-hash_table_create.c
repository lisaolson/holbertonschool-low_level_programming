#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Returns: pointer to newly created hash table or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t*) * size);
	if (table->array == NULL)
		return (NULL);

	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}

	return (table);
}
