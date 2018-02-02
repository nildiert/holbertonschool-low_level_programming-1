#include "holberton.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination of string
 * @src: source of string
 * @n: total number of bytes
 *
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
