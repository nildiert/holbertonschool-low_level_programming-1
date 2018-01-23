#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: 0
 */

void print_alphabet(void)

{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');

}
