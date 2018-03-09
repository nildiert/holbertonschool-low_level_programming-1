#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: length of a string
 * Return: returns length of a string
 */

int _strlen(const char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}

/**
 * powerofnum - multiples a number to the power of a number
 * @exponent: exponent number that will be used to multiple
 * Return: Result of a number to the power of exponent
 */

unsigned int powerofnum(unsigned int exponent)
{
	unsigned int power = 1;
	unsigned int i;

	for (i = 0; i < exponent; i++)
		power *= 2;

	return (power);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input string
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i = 0;
	unsigned char length;

	if (b == NULL)
		return (0); /* can't return null bc, it is unsigned int */

	length = _strlen(b);

	length = length - 1; /*starts the exponent at the correct place */
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{	num += powerofnum(length);
		}

		i++;
		length--;
	}
	return (num);
}
