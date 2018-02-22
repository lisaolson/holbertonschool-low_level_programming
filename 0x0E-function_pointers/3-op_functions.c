#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: first integer a
 * @b: second integer b
 * Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a and b
 * @a: first integer a
 * @b: second integer b
 * Return: difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies a and b
 * @a: first integer a
 * @b: second integer b
 * Return: product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides a and b
 * @a: first integer a
 * @b: second integer b
 * Return: result of division of a by b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - division of a by b
 * @a: first integer a
 * @b: second integer b
 * Return: remainder of division of a by b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
