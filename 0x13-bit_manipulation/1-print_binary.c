#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: input numbers
 * Return: binary form of a number
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;

	num = n & 1;

	if ((n = n >> 1)) /* assigns n to be shifted & also checks if n > 0 */
		print_binary(n);

	_putchar(num + '0');
}
