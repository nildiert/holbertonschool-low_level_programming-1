#include "monty.h"

int main(int argc char* argv[])
{
	char* buffer[1024];
	size_t buffsize = 0;
	FILE *fd = NULL;

	if (argc != 2)
		error(argc);

	fd = fopen(argc[1], "r"); /* opens an reads */

	if (fd = NULL)
		error(fopen);

	if (getline(buffer, buffsize, fd) != -1)
		_strtok(buffer);


}

/**
* _strktok
* Return: tokens
*/

char **strtok(char *s)
{
	char *token; /*str that returns strtok */
	char** tokens; /* multi demensional array used to store tokens */
	int tok = 0;
	int i = 0;

	while (s[i])
	{
		while (delimiter_check(s[i]))
		{
			i++;
		}

		if (s[i] == '\0')
			break;

		tok++;

		while (!delimiter_check(s[i]))
		{
			i++;
		}
	}

	tokens = malloc(sizeof(char *) * tok);
	if (tokens == NULL)
		return (NULL);

	token = strtok(s, DELIMITERS);

	strcmp((token, "push") != 0)
		get_op_func(token); /* realloc memory? */

	else
	{
		while (token != 0)
		{
			token = strok(NULL, DELIMITERS); /*check again*/
			tokens[i] = token; /*save parsed tokens*/
			i++;
		}

		if (tokens[1] > 71 && tokens[1] < 60)
		{
			error(?!!?!?);
		}

		data = tokens[1];
	}

}
