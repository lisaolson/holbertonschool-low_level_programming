#include "clo.h"

/**
 * print_triangle - prints triangle
 * @size: First member
 * Return: Always 0.
 */
void print_triangle(int size)
{

	int num;
	int a;
	int b;
	int x;
	int y;

	x = size - 1;
	y = size - x;

	for (num = 0; num < size; num++)
	{
		a = 0;
		while (a < x)
		{
			_putchar(' ');
			a++;
		}
		b = 0;
		while (b < y)
		{
			_putchar('#');
			b++;
		}
	y++;
	x--;
	_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
