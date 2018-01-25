#include "holberton.h"

/**
 * print_diagonal - draw diagonal line
 * @n: First int
 * Return: Always 0.
 */
void print_diagonal(int n)
{

int a;
int b;
	a = 0;
	while (a < n)
	{
		_putchar('\\');
		_putchar('\n');
		b = 0;
		while (b < a)
		{
			_putchar(' ');
			b++;
		}
	a++;
	}
_putchar('\n');
}
