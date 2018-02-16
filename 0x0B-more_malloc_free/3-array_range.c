#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: min input value
 * @max: max input value
 *
 * Return: destination
 */

int *array_range(int min, int max)
{
	int i;
	int *k;

	if (min > max)
		return (NULL);

	k = malloc(sizeof(int) * (max - min + 1));

	if (k == NULL)
		return (NULL);

	for (i = 0; min + i <= max; i++)

		k[i] = min + i;

	return (k);
}
