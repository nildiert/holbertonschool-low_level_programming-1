#include <stdio.h>

/**
 * main - prints the number of arguments
 *
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) *argv;

	printf("%d\n", argc);

	return (0);
}
