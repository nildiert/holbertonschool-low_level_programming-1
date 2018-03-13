#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 1;
	unsigned long int temp = 0;
	int counter = 0;
	int i = 0;

	mask = mask << temp;

	while (i < 63)
	{
		temp = n ^ m;
		counter += (temp & mask);
		mask = mask >> 1;
		i++;
	}

	return (counter);
}
