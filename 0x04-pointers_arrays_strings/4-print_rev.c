#include "holberton.h"

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
 * print_rev - print a string in reverse
 * @s: length of a string
 */

void print_rev(char *s)
{
	int rev;
	int length = _strlen(s);

	for (rev = length - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
			_putchar('\n');
}
