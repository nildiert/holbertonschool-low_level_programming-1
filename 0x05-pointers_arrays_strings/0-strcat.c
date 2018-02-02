#include "holberton.h"

/**
 *_strcat - concatenates two strings
 *
 * @dest: string destination
 * @src: string source
 * Return: destination output
 */

char *_strcat(char *dest, char *src)
{

	int src_len = 0;
	int dest_len = 0;
	int count;

	for (count = 0; src[count] != '\0'; count++) /* find src len */
		src_len++;

	for (count = 0; dest[count] != '\0'; count++) /* find dest len */
		dest_len++;

	for (count = 0; count < src_len; count++)
		dest[dest_len + count] = src[count];

	dest[dest_len + count] = '\0'; /* add null */

		return (dest);
}
