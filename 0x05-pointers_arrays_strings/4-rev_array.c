#include "clo.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i;
int temp;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
		i++;
	}
}
