#include "hash_tables.h"

/**
 * key_index - Returns index of a key
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int number = 0;
	unsigned long int index = 0;

	number = hash_djb2(key);
	index = number % size;

	return (index);
}
