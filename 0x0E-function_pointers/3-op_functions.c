#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds a and b
 * @a: first integer a
 * @b: second integer b
 * Return: sum of a and b
*/
int op_add(int a, int b)
{
	int total = a + b;
	return (total);
}

/**
 * op_sub - subtracts a and b
 * @a: first integer a
 * @b: second integer b
 * Return: difference of a and b
*/
int op_sub(int a, int b)
{
	int total = a - b;
	return (total);
}

/**
 * op_mul - Multiplies a and b
 * @a: first integer a
 * @b: second integer b
 * Return: product of a and b
*/
int op_mul(int a, int b)
{
	int total = a * b;
	return (total);
}

/**
 * op_div - Divides a and b
 * @a: first integer a
 * @b: second integer b
 * Return: result of division of a by b
*/
int op_div(int a, int b)
{
	int total = a / b;
	return (total);
}

/**
 * op_mod - division of a by b
 * @a: first integer a
 * @b: second integer b
 * Return: remainder of division of a by b
*/
int op_mod(int a, int b)
{
	int total = a % b;
	return (total);
}
