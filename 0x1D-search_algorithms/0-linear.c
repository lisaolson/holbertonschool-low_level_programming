#include "search_algos.h"

/* linear_search - searches for value in array
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: First index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
        size_t i = 0;

        if (array == NULL)
                return -1;

        while (i < size)
        {
                printf("Value checked array[%lu] = [%d]\n", i, array[i]);
                if (array[i] == value)
                {
                        return array[i];
                }
                else
                {
                        i++;
                }
        }

        return -1;
}
