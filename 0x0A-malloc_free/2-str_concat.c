#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings to destination string
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: destination
 */

char *str_concat(char *s1, char *s2)
{
	int i; /* counter */
	int j; /* counter 2 */
	int sum; /* len of s1 + s2*/
	char *dest; /*destination string */

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	sum = i + j + 1; /* s1 + s2 + '\0' */

	dest = malloc(sizeof(char) * sum);

	if (dest  == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		dest[i] = s1[i]; /* copies s1 to dest */

	for (j = 0; s2[j] != '\0'; j++)
		dest[i + j] = s2[j]; /* copies s2 to dest after s1 */

	dest[i + j] = '\0';

	return (dest);
}
