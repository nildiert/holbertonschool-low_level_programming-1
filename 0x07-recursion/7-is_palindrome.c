#include "holberton.h"
#include <stdlib.h>

/**
 * str_len - finds the len of a string
 *
 * @s: string
 *
 * Return: if prime return 1 if not return 0
 */

int str_len(char *s)
{
	if (s != NULL && *s != '\0')
	{
	return (str_len(s + 1) + 1);
	}
	return (0);
}

/**
 * check - check starting & ending point of a string to see if its a palindrome
 *
 * @start: start of the string
 * @end: end of the string
 *
 * Return: 1 or 0
 */

int check(char *start, char *end)
{
	if (start >= end)
		return (1);

	if (*start == *end)
		return (check(start + 1, end - 1));

	else
		return (0);

}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len;
	char *end;

	if (*s == '\0')
	{
		return (1);
	}

	len = str_len(s);
	end = &(s[len - 1]);

	return (check(s, end));

}
