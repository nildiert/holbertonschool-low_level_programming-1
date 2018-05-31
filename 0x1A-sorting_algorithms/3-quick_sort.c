#include "sort.h"

/**
 * swap - swaps the elements of the array
 * @a: first value that will be swapped
 * @b: second value that will be swapped
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


/**
 * partition - helper function that splits an array
 * @array: array that will be used
 * @start: starting index
 * @pivot: last index that is used as a pivot
 * @size: size of array
 *
 * Return: new starting index
 */

int partition(int *array, int start, int pivot, size_t size)
{
	int j;

	for (j = start; j <= pivot - 1; j++)
	{
		if (array[j] <= array[pivot])
		{
			if (start != j)
			{
				swap(&array[start], &array[j]);
				print_array(array, size);
			}
			start++;
		}
	}
	if (start != pivot)
	{
		swap(&array[start], &array[pivot]);
		print_array(array, size);
	}
	return (start);
}


/**
 * sort - sort array after partition is executed
 * @array: array that will be used
 * @start: starting index
 * @pivot: last index that is used as a pivot
 * @size: size of array
 */

void sort(int *array, int start, int pivot, size_t size)
{
	int x;

	if (start < pivot)
	{
		x = partition(array, start, pivot, size);
		sort(array, start, x - 1, size);
		sort(array, x + 1, pivot, size);
	}
}


/**
 * quick_sort - call functions to run quicksort algorithm
 * @array: array being used
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	int start = 0;
	int pivot = size - 1;

	sort(array, start, pivot, size);
}
