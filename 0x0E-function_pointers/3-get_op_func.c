#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct function to perform the operation asked
 *
 * @s: operator passed as an argument to the program
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op && strcmp(ops[i].op, s) != 0)
	{
		i++;
	}

	return (ops[i].f);
}
