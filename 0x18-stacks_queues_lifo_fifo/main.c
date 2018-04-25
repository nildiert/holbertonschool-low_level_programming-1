#include "monty.h"

int main(int argc char* argv[])
{
	char* buffer[1024];
	size_t buffsize = 0;
	FILE *fd = NULL;
	unsigned int line_number = 0;
	stack_t **stack = NULL;

	if (argc != 2)
		error(argc);

	fd = fopen(argc[1], "r"); /* opens an reads */

	if (fd = NULL)
		error(fopen);

	while (getline(buffer, buffsize, fd) != -1)
	{
		line_number++;
		token = _strtok(buffer);
		get_op_func(token);
	}


}

/**
* _strktok
* Return: tokens
*/

char **strtok(char *s)
{
	char *token; /*str that returns strtok */
	char *tok_data; /*multi demensional array used to store tokens */
	int tok = 0;
	int data;
	int i = 0;

	token = strtok(s, DELIMITERS);


	if (strcmp(token, "push") == 0)
		tok_data == strtok(NULL, DELIMITERS);

	data = atoi(tok_data);

	get_op_func(token); /* grabs correct op func */

	return (token);

}
