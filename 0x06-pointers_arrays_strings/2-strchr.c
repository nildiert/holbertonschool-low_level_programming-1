#include "holberton.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 * @c: source
 *
 * Return: return c or null
 */

char *_strchr(char *s, char c)
{
	int i = 0; /* counter */

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
		;

	if (s[i] == c)

		return (&s[i]);
	else
		return (0);
}
