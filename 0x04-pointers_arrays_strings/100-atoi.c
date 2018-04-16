#include "holberton.h"
#include <stdlib.h>

/**
 * _atoi - converts a char to an int
 * @s: input string
 * Return: sum or -1
 */

int _atoi(char *s)
{
	int sum = 0;
	int neg = 0;
	char *ptr;
	int flag = 0;

	if (s == NULL)
		return (-1);

	ptr = s;
	while (*ptr != '\0')
	{
		if (*ptr >= '0' && *ptr <= '9')
			break;

		if (*ptr == '-')
			neg++;
		ptr++;
	}

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			sum *= 10;
			sum += (*s - '0');
			s++;
			flag = 1;

		}
		else
		{
			if (flag == 1)
				break;
			s++;
		}
	}
	if (neg % 2 == 0)
		return (sum);

	else
		return (sum * -1);
}
