#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_c - prints characters
 * @risuto: list
 * Return: Always 0.
 */

void print_c(va_list risuto)
{
	printf("%c", va_arg(risuto, int));
}

/**
 * print_i - prints integers
 * @risuto: list
 * Return: Always 0.
 */

void print_i(va_list risuto)
{
	printf("%d", va_arg(risuto, int));
}

/**
 * print_f - prints floating ints
 * @risuto: list
 * Return: Always 0.
 */

void print_f(va_list risuto)
{
	printf("%f", va_arg(risuto, double));
}

/**
 * print_s - prints a string
 * @risuto: list
 * Return: Always 0.
 */

void print_s(va_list risuto)
{
	char *str;

	str = va_arg(risuto, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - print all types of input
 * @format: input
 * Return: Always 0.
 */


void print_all(const char * const format, ...)
{
	int i, j;
	char *b = ""; /* blank */
	char *cs = ", "; /* comma space */
	va_list risuto;
	pt_t types[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL},
	};

	va_start(risuto, format);

	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (types[j].ro != NULL)
		{
			if (format[i] == *(types[j].ro))
			{
				printf("%s", b);
				(types[j].f)(risuto);
				b = cs; /* reassign to separator */
			}
		j++;
		}
		i++;
	}
	printf("\n");
	va_end(risuto);
}
