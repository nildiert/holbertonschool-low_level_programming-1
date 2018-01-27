#include "holberton.h"

/**
 * print_triangle - print a triangle
 *
 * @size: size of the triangle
 * Return - size
 */

void print_triangle(int size)
{
	int line, column, spaces;

	for (line = 1; line <= size; line++)
	{
		spaces = size - line; /* amount of spaces per line */

		for (column = 0; column < size; column++)
		{
			if (column < spaces)
			{
				_putchar(' ');
			}

			else
			{
				_putchar('#');
			}
		}
		_putchar ('\n');
	}
	if (size <= 0)
		_putchar ('\n');
}
