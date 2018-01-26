#include "holberton.h"

/**
 * print_diagonal - print diagonals
 *
 * @n: number of times the character should be printed
 */

void print_diagonal(int n)
{
	int i;
	int spaces;

	if (n <= 0)
	{
		_putchar ('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i; spaces++)
		{
			_putchar (' ');
		}
		_putchar ('\\');
		_putchar ('\n');
	}
}
