#include "holberton.h"

/**
 * print_last_digit - prints last digit of n
 * @n: First member
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int last = n % 10;

	if (last >= 0)
	{
		_putchar(last + '0');
		return (last);
	}
	else
	{
		_putchar(last * -1 + '0');
		return (-last);
	}
return (0);
}
