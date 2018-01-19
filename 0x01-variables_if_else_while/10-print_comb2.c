#include <stdio.h>

/**
 * main -  prints 00..99 with , and ' '
 *
 * Return: 0
 */

int main(void)
{
	int digit = '0';
	int num = '0';

	while (digit <= '9')
	{
		while (num <= '9')
		{
			putchar(digit);
			putchar(num);
			if (digit != '9' || num != '9')
			{
				putchar(',');
				putchar(' ');
			}
			num++;
		}
		digit++;
		num = '0';
	}
	putchar('\n');
	return (0);
}
