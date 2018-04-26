#include "monty.h"

/**
 * _isdigit - checks if element is a digit
 * @tok_data: tokenized data
 * Return: 1
 */

int _isdigit(const char* tok_data)
{
	int i = 0;

	if (!tok_data)
		exit(EXIT_FAILURE);

	while (tok_data[i] != '\0')
	{
		if (isdigit(tok_data[i]) == 0)
		{
			exit(EXIT_FAILURE);
		}
		i++;
	}
	return (1);
}
