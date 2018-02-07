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

	if (*needle == 0)
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] == haystack[i]; j++)
		{
			j++;
			return (haystack + i);
		}
	}

	if (needle[j] == '\0')
		return (haystack);

	return (0);
}
