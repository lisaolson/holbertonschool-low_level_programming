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
	unsigned int count = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			len++;
			temp = temp->next;
		}
	}
	printf("{");
	for (i = 0; i < size; i++)
	{
		while (ht->array[i] != NULL)
		{
			count++;
			if (count != len)
			{
				printf("'%s': '%s', ",
				       ht->array[i]->key, ht->array[i]->value);
			}
			else
			{
				printf("'%s': '%s'",
				       ht->array[i]->key, ht->array[i]->value);
			}
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}");
	putchar('\n');
}
