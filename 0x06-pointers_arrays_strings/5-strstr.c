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
	int i = 0; /* counter */
	int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] == haystack[i]; j++)
		{
			i++;
			return (haystack + i);
		}
	}

	if (*needle == '\0')
		return (haystack);

	return (0);
}
