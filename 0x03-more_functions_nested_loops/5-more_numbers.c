#include "holberton.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int row;
int col;
	for (col = 0; col < 10; col++)
	{
		for (row = 0; row < 15; row++)
		{
			if (row >= 10)
			{
				_putchar(row / 10 + '0');
			}
			_putchar(row % 10 + '0');
		}
	_putchar('\n');
	}
}

