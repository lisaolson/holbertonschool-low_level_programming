#include "holberton.h"

/**
 * flip_bits - returns number of bits to flip
 * @n: number received
 * @m: second number to compare
 * Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int total;
	unsigned int i = 0;
	int a = 0;

	total = n ^ m;
	while (a < 63)
	{
		i += (total & 1);
		total = total >> 1;
		a++;
	}
	return (i);
}
