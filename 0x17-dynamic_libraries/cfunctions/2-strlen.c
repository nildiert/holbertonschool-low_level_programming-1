#include "holberton.h"

/**
 * _strlen - length of a string
 *
 * @s: length of a string
 *
 * Return: returns length of a string
 */

int _strlen(char *s)
{
	int a; /* length */

	for (a = 0; s[a] != '\0'; a++)
		;
	/* string counter */

	return (a);
}
