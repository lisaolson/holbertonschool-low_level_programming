#include "holberton.h"

/**
 * print_binary - prints binary representation of a number
 * @n: integer to convert
 * Return: Nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;
	int c = 0;

	i = i << 63;
	while (i > 0)
	{
		{
			if (n & i)
			{
				_putchar('1');
				c = 1;
			}
			if (!(n & i) && c)
				_putchar('0');
		}
		i = i >> 1;
	}
	if (c == 0)
		_putchar('0');
}
