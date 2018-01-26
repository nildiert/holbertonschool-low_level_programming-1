#include "holberton.h"

/**
 * more_numbers - print 1-14 + '\n' x10
 *
 *
 */

void more_numbers(void)
{
	int a;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar (a / 10 + '0');
			}
			_putchar (a % 10 + '0');
		}
		_putchar ('\n');
	}
}
