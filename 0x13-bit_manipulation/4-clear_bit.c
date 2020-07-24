#include "clo.h"

/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: pointer to number n
 * @index: given index to set value
 * Return: 1 on success, -1 on fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	i = i << index;
	if (index > sizeof(n) * 8)
		return (-1);

	i = ~i;
	*n = (*n & i);
	return (1);
}
