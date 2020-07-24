#include "clo.h"
/**
 * prime - checks for prime number
 * @x: int x
 * @y: int y
 * Return: Returns prime number
*/

int prime(int x, int y)
{
	if ((x % y == 0) && (y != x))
		return (0);
	if ((x % y != 0) && (y < x))
		return (prime(x, y + 1));
	return (1);
}
/**
 * is_prime_number - checks for negative and returns prime
 * @n: number
 * Return: Always 0.
 */
int is_prime_number(int n)
{
int y = 2;

	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, y));
}
