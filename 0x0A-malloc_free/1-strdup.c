#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a new duplicate string
 *
 * @str: input string
 *
 * Return: pointer to the array or null
 */

char *_strdup(char *str)
{
	int i; /* str_len */
	int j; /* cpy_str */
	char *k;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	k = malloc((sizeof(char) * i) + 1); /*accounts for '\0'*/

	if (k == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		k[j] = str[j];
	}

	return (k);
}
