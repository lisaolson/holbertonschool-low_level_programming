#include "holberton.h"

/**
 * print_last_digit - prints last digit of n
 * @n: First member
 * Return: Always 0.
 */
int print_last_digit(int n)
{

	if (n >= 0)
	{
		_putchar(n % 10 + '0');
		return (n);
	}
	else
	{
		_putchar(-n % 10 + '0');
		return (-n);
	}
}
