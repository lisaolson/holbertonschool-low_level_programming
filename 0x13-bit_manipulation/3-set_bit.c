#include "holberton.h"

/**
 * set_bit - sets value of a bit to 1 at given index
 * @n: pointer to string n
 * @index: starts from 0 of the bit to set
 * Return: 1 on success; -1 on fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c = 1;

	c = c << index;
	if (index > sizeof(*n) * 8)
		return (-1);

	*n = (*n | c);
	return (1);
}
