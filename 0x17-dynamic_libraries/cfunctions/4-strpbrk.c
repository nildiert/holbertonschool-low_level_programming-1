#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: initial segement
 * @accept: bytes
 *
 * Return: matching
 */

char *_strpbrk(char *s, char *accept)
{
	int i; /* counter */
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
