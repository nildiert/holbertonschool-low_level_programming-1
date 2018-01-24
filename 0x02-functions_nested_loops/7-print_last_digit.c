#include "holberton.h"

/**
 * print_last_digit - returns the value of the last digit
 * @d: integer input
 * Return: value of the last digit
 */

int print_last_digit(int d)
{
	int lastDigit = d % 10;

	if (d < 0)
	{
		lastDigit = lastDigit * -1;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}

	else
	{
		_putchar('0' + lastDigit);
		return (lastDigit);
	}

}
