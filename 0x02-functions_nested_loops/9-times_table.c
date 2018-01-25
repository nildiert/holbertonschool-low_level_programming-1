#include "holberton.h"

/**
 * times_table - print 9 times table
 *
 */

void times_table(void)
{
	int prod;
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;

			if (j == 0)
			{
				_putchar('0');
			}

			else if (prod <= 9)
			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar (prod + '0');
			}
			else
			{
				_putchar (',');
				_putchar (' ');
				_putchar (prod / 10 + '0');
				_putchar (prod % 10 + '0');
			}
		}
		_putchar ('\n');
	}
}
