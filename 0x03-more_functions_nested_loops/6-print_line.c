#include "clo.h"

/**
 * print_line - draws straight line in terminal
 * @n: First member
 * Return: Always 0.
 */
void print_line(int n)
{
int a;
	while (a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
