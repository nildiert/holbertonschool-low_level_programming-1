#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>


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

	if (!array)
		return;
	if (size <= 0)
		return;
	if (!action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}

}
