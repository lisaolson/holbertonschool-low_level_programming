#include "clo.h"

/**
 * times_table - creates function to build 9x9 times table
 *
 * Return: Always 0.
 */
void times_table(void)
{

int j;
int k;
int result;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			result = j * k;
			if (k > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result < 10 && k != 0)
			{
				_putchar(' ');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar((result % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
