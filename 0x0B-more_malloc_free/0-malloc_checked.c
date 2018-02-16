#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: allocated input memory value
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{

	void *k;

	k = malloc(b);

	if (k == NULL)
	{
		exit(98);
	}

	return (k);
}
