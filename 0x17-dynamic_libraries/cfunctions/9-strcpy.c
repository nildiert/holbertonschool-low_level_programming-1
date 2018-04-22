#include "holberton.h"

/**
 * _strcpy - copies a string from src to dest
 *
 * @dest: source of data
 * @src: destination for data
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);

}
