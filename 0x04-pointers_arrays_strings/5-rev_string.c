#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - print lenght of a string
 * @s: string
 * Return: length
 */


int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;
	/* string counter */

	return (length);
}

/**
 * rev_string - reverse a string
 * @s: length of a string
 */

void rev_string(char *s)
{
	int rev;
	int length = _strlen(s);
	char *ptr;
	char temp;

	ptr = s;

	for (rev = length - 1; rev >= length / 2; rev--)
	{
		temp = *ptr;
		*ptr = s[rev];
		s[rev] = temp;
		ptr++;
	}

}
