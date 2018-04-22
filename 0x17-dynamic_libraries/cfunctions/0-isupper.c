#include "holberton.h"

/**
 * _isupper - checks for uppercase
 *
 * @c: character
 * Return: c
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
