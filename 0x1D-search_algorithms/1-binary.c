#include "search_algos.h"

/**
 * print_array - helper function to print subarray
 * @array: pointer to first element of the array
 * @low: size of left side of subarray
 * @high: size of right side of subarray
 * Return: None
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * binary_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		size_t mid = (high - low) / 2 + low;

		print_array(array, low, high);
		if (array[mid] == value)
			return (mid);
		if (value  > array[mid])
			/* excludes mid */
			low = mid + 1;
		else
			/* excludes mid */
			high = mid - 1;
	}
	return (-1);
}
