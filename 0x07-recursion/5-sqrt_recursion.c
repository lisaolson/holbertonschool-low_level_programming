#include "holberton.h"
/**
 * square - function to calculate square of number
 * @y: int y representing n
 * @x: int x to iterate through squares
 *
 * _sqrt_recursion - returns natural square root of a number
 * Return: Always 0.
 */

int square(int y, int x)
{
	if ((x * x) > y)
		return (-1);
	if ((x * x) == y)
		return (x);
	return (square(y, x + 1));
}

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (1);
	return (square(n, 1));
}
