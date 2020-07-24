#include "clo.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of the two diagnoals of a square
 * @a: pointer
 * @size: size variable
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
int i, j, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
	}
	for (j = 1; j <= size; j++)
	{
		sum2 += a[(size - 1) * j];
	}
	printf("%d, %d\n", sum1, sum2);
}
