#include <stdlib.h>
#include "holberton.h"

/**
 * *create_array - creates an array of chars
 * @size: size of array
 * @c: chars to fill array
 * Return: pointer to array
*/
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
