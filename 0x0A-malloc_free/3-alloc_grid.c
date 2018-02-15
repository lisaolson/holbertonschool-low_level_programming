#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * **alloc_grid - returns a pointer to a 2-D array
 * @width: width of array
 * @height: height of array
 * Return: 0
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, k;

	if (width == 0 || height == 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		k = 0;
		while (k < width)
		{
			grid[i][k] = 0;
			k++;
		}
		i++;
	}
	return (grid);
}
