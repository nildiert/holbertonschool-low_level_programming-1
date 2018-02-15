#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of a grid
 * @height: height of a grid
 *
 * Return: 0 or Null
 */

int **alloc_grid(int width, int height)
{
	int i; /* width */
	int j; /* height */
	int **k; /* poiner to pointer */

	if (width < 1 || height < 1)
		return (NULL);

	k = malloc(sizeof(int *) * height); /* int pointer */

	if (k == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		k[j] = malloc(sizeof(int) * width);

		if (k[j] == NULL)
		{
			for (i = 0; i < j; i++)
			{
				free(k[i]); /*free indv pnters inside pnters */
			}

			free(k); /* free all */

			return (NULL);
		}
		for (i = 0; i < width; i++)
			k[j][i] = 0;
	}
	return (k);
}
