#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 *
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i;
	int coin = 0;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("0\n");

		return (0);
	}

	while (i > 0)
	{
		if (i >= 25)
		{
			i -= 25;
			coin++;
		}

		else if (i >= 10)
		{
			i -= 10;
			coin++;
		}

		else if (i >= 5)
		{
			i -= 5;
			coin++;
		}

		else if (i >= 2)
		{
			i -= 2;
			coin++;
		}

		else
		{
			i -= 1;
			coin++;
		}

	}

	printf("%d\n", coin);

	return (0);
}
