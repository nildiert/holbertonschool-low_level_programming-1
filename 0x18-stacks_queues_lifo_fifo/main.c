#include "monty.h"

int data;

int main(int argc, char* argv[])
{
	char *buffer;
	size_t buffsize;
	FILE *fd;
	unsigned int line_number;
	stack_t **stack = NULL;
	instruction_t *f;
	char *token = NULL;

	printf("got here 2?");
	if (argc != 2)
	{
		printf("argc is not 2");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r"); /* opens an reads */
	printf("got here 3?");
	if (fd == NULL)
		exit(EXIT_FAILURE);

	line_number = 0;
	buffsize = 0;
	buffer = NULL;
	while (getline(&buffer, &buffsize, fd) != -1)
	{
		line_number++;
		token = tokenize(buffer);
		f = get_op_func(token);
		f->f(stack, line_number);
	}
	return (0);
}

/**
* _strktok
* Return: tokens
*/

char *tokenize(char *s)
{
	char *token; /*str that returns strtok */
	char *tok_data; /*multi demensional array used to store tokens */

	token = strtok(s, DELIMITERS);


	if (strcmp(token, "push") == 0)
	{
		tok_data = strtok('\0', DELIMITERS);
		if (tok_data)
			exit(EXIT_FAILURE);
		data = atoi(tok_data);
	}
	get_op_func(token); /* grabs correct op func */

	return (token);

}
