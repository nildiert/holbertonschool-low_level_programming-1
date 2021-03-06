#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints an array
 *
 * @a: array of int
 * @n: number of elements in array to be printed
 *
 * Return: array
 */

void print_array(int *a, int n)
{
	int v = 0; /* counter */

	while (v < n) /* how many iterations of loop */
	{
		if (v < n - 1)
		{
			printf("%d, ", a[v]); /* value inside a @ index v */
		}
		else
		{
			printf("%d", a[v]);
		}
		v++;
	}
	printf("\n");
}
