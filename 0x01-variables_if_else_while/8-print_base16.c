#include <stdio.h>

/**
 * main -  prints all single digit numbers of base 16
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
