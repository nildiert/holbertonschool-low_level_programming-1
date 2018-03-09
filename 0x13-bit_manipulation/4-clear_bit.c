#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: input value
 * @index: index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	mask = mask << index;

	if (index > sizeof(n) * 8)
		return (-1);

	mask = ~mask;

	*n = (*n & mask);

	return (1);
}
