#include "holberton.h"

/**
 * _atoi - converts a char to an int
 * @s: input string
 * Return: sum or -1
 */

int _atoi(char *s)
{
	int sum = 0;

	if (s == NULL)
		return (-1);

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			sum *= 10;
			sum += (*s - '0');
			s++;
		}

		else
			return (-1);
	}

	return (sum);
}
