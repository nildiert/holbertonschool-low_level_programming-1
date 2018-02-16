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
	int i; /* ac counter */
	int j = 0; /* overall letter count */
	int z; /* array counter */
	int k = 0; /* destination counter */
	int tot; /* total */
	char *m;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (z = 0; av[i][z] != '\0'; z++)
		{
			j++; /* increments letter count */
		}
		j++; /* adds space for null / newline */
	}
	tot = i + j + 1;
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
