#include <stdio.h>

/**
 * main -  prints hex, 0..f
 *
 * Return: 0
 */

int main(void)
{
	char digit = '0';
	int n = 'a';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	while (n < 'g')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
