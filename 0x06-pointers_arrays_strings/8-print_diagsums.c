#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals of a square matrix of int
 *
 * @a: array
 * @size: size of array
 *
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;
	int j = size - 1;

	while (i < size * size)
	{
		sum1 += a[i];
		sum2 += a[j];

		i += size + 1;
		j += size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
