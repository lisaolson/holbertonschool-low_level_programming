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
	unsigned int index;
	unsigned int size;

	size = ht->size;

	index = key_index((const unsigned char *)key, size);

	printf("%u\n", index);

	return (0);
}
