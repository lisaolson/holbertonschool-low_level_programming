#include "clo.h"

/**
 * swap_int - swap values of two integers
 * @a: sets pointer a
 * @b: sets pointer b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int num;
	num = *a;
	*a = *b;
	*b = num;
}
