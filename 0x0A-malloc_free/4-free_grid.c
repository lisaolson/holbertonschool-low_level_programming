#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * free_grid - free a 2-D grid
 * @grid: double pointer grid
 * @height: height
 * Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	if (height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
