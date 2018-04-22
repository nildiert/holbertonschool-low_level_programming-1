#include "holberton.h"

/**
 * _memset - function fills the first n bytes of memory area
 *
 * @s: array
 * @b: number to place into the array
 * @n: number of replacement to make
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
