#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: byte size of each element
 * Return: NULL or pointer to array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(sizeof(nmemb) * size);
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ar[i] = nmemb;
		i++;
	}
	return (ar);
}
