#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int size;
	unsigned int i = 0;
	unsigned int len = 0;

	size = ht->size;
	if (ht == NULL)
		return;


	for (i = 0; i < size; i++)
	{
		while (ht->array[i] != NULL)
		{
			len++;
			i++;
		}
	}
	i = 0;

	printf("{");
	for (i = 0; i < size; i++)
	{
		while (ht->array[i] != NULL)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (i < len)
			{
				putchar(',');
				putchar(' ');
			}
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}");
	putchar('\n');
}
