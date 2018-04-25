#include "monty.h"


/**
 * error - print the error msg and exit
 * @err: parameter
 */
void error(int err, ...)
{
	va_list list;

	va_start(list, err);
	if (err == 1)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	if (err == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file ");
		dprintf(STDERR_FILENO, "%s\n", va_arg(list, char *));
		exit(EXIT_FAILURE);
	}
	if (err == 3)
	{
		dprintf(STDERR_FILENO, "L%d : unknown instruction ", va_arg(list, int));
		dprintf(STDERR_FILENO, "%s\n", va_arg(list, char *));
		exit(EXIT_FAILURE);
	}
	if (err == 4)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n", va_arg(list, int));
		exit(EXIT_FAILURE);
	}
	if (err == 5)
	{
		dprintf(STDERR_FILENO, "L%d : usage: push intger\n ");
		dprintf(STDERR_FILENO, "%d\n", va_arg(list, int));
		exit(EXIT_FAILURE);
	}
	if (err == 6)
	{
		dprintf(STDERR_FILENO, " L<%d>: can't pint, stack empty\n");
		exit(EXIT_FAILURE);
	}
	if (err == 7)
	{
		dprintf(STDERR_FILENO, "L%d : usage: push inter\n ");
		dprintf(STDERR_FILENO, "%d\n", va_arg(list, int));
		exit(EXIT_FAILURE);
	}


	va_end(list);
}
