#include "holberton.h"

/**
 * *leet - replaces 'aA,eE, oO, tT, l,L with 4,3,0,7,1
 *
 * @char: string input
 *
 * Return: char *
 */

char *leet(char *s)
{
	int x[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	int y[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; x[j]; j++)
		{
			if (x[j] == s[i])
				s[i] = y[j];
		}

		i++;
	}

	return (s);
}
