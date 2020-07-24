#include "clo.h"

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int c;
	c = 48;
	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
