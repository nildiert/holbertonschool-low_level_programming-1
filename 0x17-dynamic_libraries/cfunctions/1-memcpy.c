#include "holberton.h"

/**
 * _memcpy - function copies n bytes from memory area src to dest
 *
 * @dest: destination
 * @src: source
 * @n: varible
 *
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0; /* counter */

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
