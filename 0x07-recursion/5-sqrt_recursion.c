#include "holberton.h"
/**
 * square - function to calculate square of number
 * @y: square`
 * @x: int x to iterate through squares
 * Return: squareroot of n
*/

int square(int y, int x)
{
	if ((x * x) > y)
		return (-1);
	if ((x * x) == y)
		return (x);
	return (square(y, x + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 * Return: Always 0.
*/
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (1);
	return (square(n, 1));
}
