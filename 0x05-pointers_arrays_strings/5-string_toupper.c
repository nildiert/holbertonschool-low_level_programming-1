#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to upper
 *
 * @s: string input
 *
 * Return: 0
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}
