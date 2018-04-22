#include "holberton.h"

/**
 *  _isalpha - returns 1 if c is a letter, lowercase or uppercase
 * @c: integer input
 * Return: 0
 */

int _isalpha(int c)
{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);

	}

	else
		return (0);
}
