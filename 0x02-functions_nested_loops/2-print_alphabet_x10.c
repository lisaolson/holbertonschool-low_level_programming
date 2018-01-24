#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int num = 0;
	char c;

	while (num < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
	num++;
	}
}
