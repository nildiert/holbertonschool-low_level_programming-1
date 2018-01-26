#include "holberton.h"
#include <stdio.h>

/**
 * main - print 1 - 100, 3s = Fizz, 5s = Buzz, 3&5s = FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{

		if ((n % 3) == 0)
		{
			printf("Fizz ");
		}

		else if ((n % 5) == 0)
		{
			if (n == 100)
			{
				printf("Buzz");
			}

			else
			{
				 printf("Buzz ");
			}
		}

		else if (((n % 3) == 0) && ((n % 5) == 0))
		{
			printf("FizzBuzz ");
		}

		else
		{
			 printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
