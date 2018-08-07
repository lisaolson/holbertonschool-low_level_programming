#include "search_algos.h"

/**
 * binary_search - searches for value in sorted array
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: First index where value is located or -1
*/

int binary_search(int *array, size_t size, int value)
{

	int left = 0;
	int right = size - 1;
	size_t  middle = 0;

	while (left <= right)
	{
		middle = (left + right) / 2;

		if (array[middle] > value)
		{
			right = middle - 1;
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		return (value);
	}
	return (-1);
}



/*
 * void print_array(int *array)
 * {
 *       i = 0;
 *
 *       while (array[i] != '\0')
 *               print(array[i];
 * }
*/
