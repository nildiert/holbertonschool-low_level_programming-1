#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			sum += atoi(argv[i]);

		printf("%d\n", sum);

	}

	else if (argc == 0)
		printf("0\n");

	return (0);
}
