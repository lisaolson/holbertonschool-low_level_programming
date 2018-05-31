#include "sort.h"
/**
 * sort - sorts partitioned array
 * @array: array to be sorted
 * @left: sorts left side of array
 * @right: sorts right side of array
 * @size: size of array
 */

void sort(int *array, int left, int right, size_t size)
{
	int index;

	if (left < right)
	{
		index = partition(array, left, right, size);
		sort(array, left, index - 1, size);
		sort(array, index + 1, right, size);
	}
}

/**
 * partition - partitions array based on pivot
 * @array: array to be sorted
 * @left: sorts left side of array
 * @right: sorts right side of array
 * @size: size of array
 * Return: partitions
 */
int partition(int *array, int left, int right, size_t size)
{
	int pivot = array[right];
	int i = left - 1;
	int j;
	int temp, temp2;

	for (j = left; j <= right - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (i != j)
			{
				print_array(array, size);
			}
		}
	}
	temp2 = array[i + 1];
	array[i + 1] = array[right];
	array[right] = temp2;

	if (i + 1 != right)
		print_array(array, size);
	return (i + 1);
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: Array to be sorted using Quick Sort Algorithm\
(Lomuto partition scheme)
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}
