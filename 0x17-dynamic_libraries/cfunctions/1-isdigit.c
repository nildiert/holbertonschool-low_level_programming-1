#include "holberton.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: digit
 *
 * Return: c
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
