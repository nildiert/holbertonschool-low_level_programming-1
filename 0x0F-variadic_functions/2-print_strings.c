#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: separates values with a comma
 * @n: values
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	char *string;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(vlist, char*);

		if (string == NULL)
		{
			printf("(nil)\n");
			return;
		}
		if  (separator != NULL)
		{
			printf("%s", string);
				if (i < (n - 1))
				printf("%s", separator);
		}

	}
	printf("\n");
	va_end(vlist);
}
