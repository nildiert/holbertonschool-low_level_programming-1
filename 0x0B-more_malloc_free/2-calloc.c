#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 *
 * @nmemb: number of member inputs
 * @size: input size
 *
 * Return: array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *k; /* pointer of any type */

	if (nmemb == 0 || size == 0)
		return (NULL);

	k = malloc(nmemb * size);

	if (k  == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*((char *) k + i) = 0; /* fills in 1 byte at a time w char */

	return (k);
}
