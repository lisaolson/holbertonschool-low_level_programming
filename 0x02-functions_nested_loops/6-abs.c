#include "holberton.h"

/**
 * _abs - computes absolute value of number
 * @n: First member
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
	{
		n = -n;
		return (n);
	}
}
