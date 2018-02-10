#include "holberton.h"

/**
 * square_root - finds the square root of input number
 *
 * @n: input number
 * @mult: multiplier number
 *
 * Return: multiplier for the square root
 */


int square_root (int n, int mult)
{
	if (n == mult)
		return (-1);

	if (mult * mult != n)
		return (square_root(n, mult + 1));

	return (mult);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: input number
 *
 * Return: square root of a number
 */

int _sqrt_recursion (int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (square_root(n, 2));
}
