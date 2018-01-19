#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */

int main(void)
{
	char digit = '1';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
