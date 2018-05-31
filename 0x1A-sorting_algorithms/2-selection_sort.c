#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: array
 * @size: size
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, low;
	int temp;

	for (j = 0; j < (size - 1); j++)
	{
		low = j;
		for (i = j + 1; i < size; i++)
			if (array[i] < array[low])
				low = i;
		if (low != j)
		{
			temp = array[j];
			array[j] = array[low];
			array[low] = temp;
			print_array(array, size);
		}
	}
}
