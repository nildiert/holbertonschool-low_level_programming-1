#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid
 *
 * @grid: grid
 * @height: height
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i; /* counter */

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
