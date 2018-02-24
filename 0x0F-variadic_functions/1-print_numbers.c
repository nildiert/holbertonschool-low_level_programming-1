#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: comma that seperates values
 * @n: values
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	int value;

	va_start (vlist, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(vlist, unsigned int);
		printf("%d", value);

		if (separator != NULL)
		{
			if ( i < (n - 1)) /* doesn't print the last separator */
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end (vlist);
}
