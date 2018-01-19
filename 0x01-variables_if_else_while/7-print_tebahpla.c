#include  <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then in uppercase
 *
 * Return: 0
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');
	return (0);
}
