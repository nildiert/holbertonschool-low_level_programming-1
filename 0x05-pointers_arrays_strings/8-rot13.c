#include "holberton.h"

/**
 * rot13 - rotate by 13 letters
 * @s: character input
 * Return: S
 */

char *rot13(char *s)
{
	int i = 0;
	int base;

	while (s[i] != '\0')
	{

		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 90))
		{
			base = 'a';

			while (s[i] >= 'A' && s[i]  <= 'Z')
			{	base = 'A';
				break;
			}
			s[i] = ((((s[i] - base) + 13) % 26) + base);
		}
		i++;
	}
	return (s);
}
