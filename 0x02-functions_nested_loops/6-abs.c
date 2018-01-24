#include "holberton.h"

/**
 *  _abs - computes the absolute value of an integer
 * @c: integer input
 * Return: 0
 */

int _abs(int c)
{

	if (c < 0)
	{
		return (c * -1);
	}

	else if (c == 0)
	{
		return (0);
	}

	else
	{
		return (c);
	}

}
