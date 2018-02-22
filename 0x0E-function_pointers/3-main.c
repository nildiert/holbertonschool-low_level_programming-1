#include "3-calc.h"

/**
 * main - main function
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i; /* num1 */
	int j; /* num2 */
	int result;
	int (*k)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	k = (get_op_func(argv[2]));

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && (j == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if (k == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = k(i, j);

	printf("%d\n", result);

	return (0);
}
