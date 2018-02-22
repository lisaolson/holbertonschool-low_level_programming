#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of pointers
 * @size: size of array
 * @cmp: pointer function
 * Return: index of element that returns 1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (NULL);
	if (cmp == NULL)
		return (NULL);
	for (a = 0; a <= size; )
	{
		if (cmp(array[a]) == 0)
			a++;
		else
			return (a);
	}
	return (-1);
}
