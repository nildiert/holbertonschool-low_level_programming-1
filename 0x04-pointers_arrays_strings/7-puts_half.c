#include "holberton.h"

/**
 * puts_half - print half of a string
 *
 * @str: string
 *
 * Return: half a string
 */

void puts_half(char *str)
{
	int c, start; /* counter and start point for half way */

	for (c = 0; str[c] != '\0'; c++)

		;

		if ((c % 2) == 0)
		{
			start = c / 2;
		}

		else
			start = (c + 1) / 2;

		for (; str[start] != '\0'; start++) /* no reint, print str */

		_putchar(str[start]);

	_putchar('\n');
}
