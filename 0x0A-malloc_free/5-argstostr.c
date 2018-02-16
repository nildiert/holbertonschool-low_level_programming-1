#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - seperate all arguments in new lines
 *
 * @ac: arg count
 * @av: arguments
 *
 * Return: null or string
 */

char *argstostr(int ac, char **av)
{
	int i; /* counter */
	int j; /* counter 2 */
	int k = 0; /* counter 3 */
	int tot = 0; /* total*/
	char *m;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++);
		{
			tot++;
		}

		tot++;
	}

	tot++;

	m = malloc(sizeof(char) * (tot));

	if (m == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{

		for (j = 0; av[i][j] != '\0'; j++)
		{
			m[k] = av[i][j];
			k++;
		}
		m[k] = '\n';
		k++;
	}

	m[k] = '\0';

	return (m);
}
