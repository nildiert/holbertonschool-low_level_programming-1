#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars initialized with a specific char
 *
 * @size: size of memory to print
 * @c: array of chars
 *
 * Return: pointer to the array or null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j; /* array of chars */

	if (size == 0)
		return (NULL);

	j = malloc(sizeof(char) * size);

	if (j == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		j[i] = c;
	}

	return (j);
}
