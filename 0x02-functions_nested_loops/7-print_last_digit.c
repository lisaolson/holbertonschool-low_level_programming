#include "holberton.h"

/**
 * print_last_digit - prints last digit of n
 * @n: First member
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int k;

k = n % 10;
	if (k >= 0)
	{
		_putchar(k + '0');
		return (k);
	}
	else
	{
		_putchar(-k + '0');
		return (-k);
	}
}
