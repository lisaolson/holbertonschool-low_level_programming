#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prit n elements of an array of ints
 * @a: pointer a
 * @n: int n value
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int c;
	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
