#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of unsorted integers
 * @size: size of input value
 **/

void bubble_sort(int *array, size_t size)
{
	size_t i, j = 0;
	size_t checker, temp = 0;

	if (array == NULL || size == 0)
		return;

	checker = 0;
	for (i = 0; i < (size - 1); i++)
	{
		/* ignores correctly sorted last value */
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				checker = 1;
				print_array(array, size);
			}
		}
		if (checker == 0)
			break;
	}
}
