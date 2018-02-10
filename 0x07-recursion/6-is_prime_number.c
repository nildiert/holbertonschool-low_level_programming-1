#include "holberton.h"

/**
 * prime_check - checks if number is a prime
 *
 * @n: input number
 * @x: text number
 *
 * Return: if prime return 1 if not return 0
 */

int prime_check(int n, int x)
{
	if (x == n)
		return (1);

	if (n % x == 0)
		return (0);

	return ((prime_check(n, x + 1)));
}

/**
* is_prime_number - final check for if number is a prime
*
* @n: input number
*
* Return: 1, 0, -1
*/

int is_prime_number(int n)
{
	if (n < 0)
		return (0);

	if (n == 1)
		return (0);

	if (n == 0)
		return (1);

	return ((prime_check(n, 2)));
}
