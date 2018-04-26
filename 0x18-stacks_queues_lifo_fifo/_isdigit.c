#include "monty.h"

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
