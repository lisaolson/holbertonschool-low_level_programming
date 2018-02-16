#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to return
 * @old_size: initial size
 * @new_size: new size
 * Return: void pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		free(ptr);
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
