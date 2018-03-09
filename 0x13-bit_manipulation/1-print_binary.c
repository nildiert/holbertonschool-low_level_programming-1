#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: input numbers
 * Return: binary form of a number
 */

void print_binary(unsigned long int n)
{
	unsigned long int number;

	number = n & 1; /* bitwise comparison */

	n = n >> 1;

	if (n > 0)
		print_binary(n); /* recalls function until n > 0 */

	_putchar(number + '0');
}
