#include "holberton.h"

/**
 * cap_string - capitalizes all worlds of a string
 *
 * @s: string input
 *
 * Return: 0
 */

char *cap_string(char *s)
{
	int i;
	int j;
	int sp[] = {' ', '\n', '\t', ',', ';', '.', '!',
		    '?', '"', '(', ')', '{', '}', '\0'};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sp[j] != '\0'; j++)
		{
			if (s[i] == sp[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
