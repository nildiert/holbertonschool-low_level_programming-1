#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a parameter on each element of an array
 *
 * @array: array of values
 * @size: size of the array
 * @action: pointer to the function needed (array)
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}

}
