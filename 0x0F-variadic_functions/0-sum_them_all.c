#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: value
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	unsigned int sum;

	va_start(vlist, n);

	if (n == 0)
		return (0);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(vlist, int);

	va_end(vlist);
	return (sum);
}
