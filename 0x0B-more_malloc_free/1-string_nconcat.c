#include "holberton.h"
#include <stdlib.h>

/**
 * str_nconcat - concatenates two strings to destination string
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: destination
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i; /* counter */
	unsigned int j; /* counter 2 */
	unsigned int sum; /* len of s1 + s2 + n*/
	char *dest; /*destination string */

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;


	sum = i + n + 1; /* s1 + s2/n + '\0' */

	/* if (j > n)
	   j = n; */

	dest = malloc(sizeof(char) * sum);

	if (dest  == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		dest[i] = s1[i]; /* copies s1 to dest */

	for (j = 0; j < n; j++)
		dest[i + j] = s2[j]; /* copies s2 to dest after s1 */

	dest[i + j] = '\0';

	return (dest);
}
