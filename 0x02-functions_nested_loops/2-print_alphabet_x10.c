#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase x10
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{

	int b = 0;

	while (b < 10)
	{
		int a = 'a';

		while (a <= 'z')
		{
		_putchar(a);
		a++;
		}

		b++;
		_putchar('\n');
	}


}
