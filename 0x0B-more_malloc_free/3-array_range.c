#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - creates array of integers
 * @min: min values
 * @max: max values
 * Return: pointer int array
*/
int *array_range(int min, int max)
{
	int *ar;
	int i, total;

	if (min > max)
		return (NULL);
	total = max - min;
	ar = malloc(sizeof(int) * ((total) + 1));
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i <= total)
	{
		ar[i] = min;
		i++;
		min++;
	}
	return (ar);
}
