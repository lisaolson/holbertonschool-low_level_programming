#include "clo.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: given integer
 * @index: index to return value of bit
 * Return: value of bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int c = 1;

	c = c << index;
	if (index > (sizeof(int) * 8))
		return (-1);
	if (n & c)
		return (1);
	else
		return (0);
}
