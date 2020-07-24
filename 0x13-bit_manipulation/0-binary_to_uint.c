#include "clo.h"

/**
 * _pow - returns a to power of b
 * @a: first int received
 * @b: second int received
 * Return: power of two ints
*/
int _pow(int a, int b)
{
	int exp = 1;

	if (b == 0)
		return (1);

	while (b > 0)
	{
		exp *= a;
		b--;
	}

	return (exp);
}

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointing to string of 0 and 1
 * Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int c = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[c] != '\0')
		c++;

	c--;
	while (c >= 0)
	{
		if (b[c] == '0' || b[c] == '1')
		{
			total += ((b[c]) - '0') * _pow(2, i);
			i++;
			c--;
		}
		else
			return (0);
	}
	return (total);
}
