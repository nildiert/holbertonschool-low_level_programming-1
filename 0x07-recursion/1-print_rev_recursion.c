#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: input string
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1); /* runs through function and then prints */
	_putchar(*s);

}