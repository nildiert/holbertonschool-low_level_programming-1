#include "holberton.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: beginning of located substring or null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i; /* counter */
	int j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
			{
				return (&needle[i]);
			}
		}
	}
	return (0);
}
