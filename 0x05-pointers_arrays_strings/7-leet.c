#include "holberton.h"
#include <stdio.h>

/**
 * *leet - replaces 'aA,eE, oO, tT, l,L with 4,3,0,7,1
 *
 * @char: string input
 *
 * Return: char *
 */

char *leet(char *s)
{
	char *x = "aAeEoOtTlL";

	char *y = "4433007711";

	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (x[j] == s[i])
			{
				s[i] = y[j];
			}
		}
		i++;
	}
	return (s);
}
