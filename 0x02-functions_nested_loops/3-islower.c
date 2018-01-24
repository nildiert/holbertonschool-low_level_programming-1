#include "holberton.h"

/**
 *  _islower - returns 1 if c is lowercase
 * @c: integer input
 * Return: 0
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
		return (0);
}
