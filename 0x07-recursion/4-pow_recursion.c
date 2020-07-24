#include "clo.h"
/**
 * _pow_recursion - return value of x to power of y
 * @x: value x var
 * @y: power y var
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, (y - 1)));
}
