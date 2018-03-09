#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index of numbers
 * @n: input numbers
 * Return: value of index or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(n) * 8))
		return (-1);

	mask = mask << index;

	if ((n & mask))
		return (1);

	else
		return (0);
}
