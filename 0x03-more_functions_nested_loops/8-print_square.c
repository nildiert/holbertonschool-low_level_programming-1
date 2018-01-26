#include "holberton.h"

/**
 * print_square - print a square
 *
 * @size: size of the square
 */

void print_square(int size)
{
	int c; /* counter */
	int s; /* squares */

	if (size <= 0)
	{
		_putchar ('\n');
		return;
	}

	for (c = 0; c < size  ; c++)
	{
		for (s = 0; s < size; s++)
		{
			_putchar ('#');
		}
		_putchar ('\n');
	}
}
