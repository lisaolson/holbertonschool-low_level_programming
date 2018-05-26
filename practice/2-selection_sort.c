#include "sort.h"
#include <stdio.h>

void selection_sort(int *array, size_t size)
{
	size_t temp = 0;
	size_t min = 0;
	size_t a = 0;
	size_t b = 0;

	for (a = 0; a < size - 1; a++)
	{
		min = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[min])
			{
				min = b;
			}
		}
		if (min != a)
		{
			temp = array[a];
			array[a] = array[min];
			array[min] = temp;
		}
		print_array(array, size);
	}
}
