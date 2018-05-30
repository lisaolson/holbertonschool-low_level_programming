#include "sort.h"

void sort(int *array, int left, int right, size_t size)
{
	if (left < right)
	{
		int index = partition(array, left, right, size);
		sort(array, left, index - 1, size);
		sort(array, index + 1, right, size);
	}
}

int partition(int *array, int left, int right, size_t size)
{
	int pivot = array[right];
	int i = left - 1;
	int j = 0;
	int temp, temp2 = 0;

	for (j = left; j <= right - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	print_array(array, size);
	temp2 = array[i + 1];
	array[i + 1] = array[right];
	array[right] = temp2;
	return i + 1;
}

void quick_sort(int *array, size_t size)
{
	sort(array, 0, array[size - 1], size);
}
