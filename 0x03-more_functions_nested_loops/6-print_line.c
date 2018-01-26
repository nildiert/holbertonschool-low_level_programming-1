#include "holberton.h"

/**
 * print_line - draws a straight line
 *
 * @n: number of times the character should be printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar ('_');
	}
	_putchar ('\n');
}
