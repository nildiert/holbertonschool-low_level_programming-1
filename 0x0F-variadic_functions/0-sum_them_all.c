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
	int sum;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
		sum = va_arg(vlist, unsigned int);

	va_end(vlist);
	return (sum);
}
