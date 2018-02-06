#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: initial segement
 * @accept: bytes
 *
 * Return: return c or null
 */

unsigned int _strspn(char *s, char *accept)
{
	int i; /* counter */
	int j;
	int k = 0; /* length of how many are matching */

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break; /* breaks out of outer loop */
			}
		}
		if (accept[j] == '\0')
			break; /* stops at , and space */
	}

	return (k);
}
