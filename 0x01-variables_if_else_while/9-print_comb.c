#include <stdio.h>

/**
 * main -  prints 1-9 with , and ' '
 *
 * Return: 0
 */

int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
		if (digit <= '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
