#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: input values
 * @index: index
 * Return: 1 if successful or -1 if there is an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(n) * 8))
		return (-1);

	mask = mask << index;

	*n = (*n | mask); /* changes n */
		return (1);
}
