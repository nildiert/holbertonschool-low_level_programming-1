#include "holberton.h"

/**
 * flip_bits - return number of times you need to flip to get to another number
 * @n: input value
 * @m: another input value
 * Return: count, number of times you flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 1;
	unsigned long int checker = n ^ m;
	int count = 0;

	while (checker > 0)
	{
		count += (checker & mask); /* if first bit is 1, count++ */
		checker = checker >> 1;
	}

	return (count);
}
