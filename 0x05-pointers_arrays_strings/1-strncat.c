#include "holberton.h"

/**
 * _strncat - concatenates two strings
 *
 * @char: char
 * @src: source of string
 * @n: total number of bytes
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int count = 0;

	for (count = 0; dest[count] != '\0'; count++)
		;

	while ( x < n && src[x] != '\0') /* declare stop point too */
	{
		dest[count] = src[x];
		x++;
		count++;
	}

	dest[count] = '\0';

	return (dest);
}
