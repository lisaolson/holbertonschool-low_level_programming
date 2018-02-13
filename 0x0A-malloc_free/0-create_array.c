#include <stdlib.h>
#include "holberton.h"

/**
 * *create_array - creates an array of chars
 * @size: size of array
 * @c: chars to fill array
*/
char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(c));
	return (ar);
}
