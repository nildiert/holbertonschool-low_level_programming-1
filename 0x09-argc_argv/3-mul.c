#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	int i, j;

	i = atoi(argv[1]);

	j = atoi(argv[2]);

	printf("%d\n", i * j);

	return (0);
}
