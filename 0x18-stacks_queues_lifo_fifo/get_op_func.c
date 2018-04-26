#include "monty.h"

instruction_t *get_op_func(const char *s)
{
	int i;
	instruction_t *opc = NULL;
	instruction_t ops [] = {
		{"push", op_push},
		{NULL, NULL}
/*


		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop},
		{"sub", op_sub},
		{"div", op_div},
		{"mul", op_mul},
		{"mod", op_mod},
		{NULL, NULL}
*/
	};

	i = 0;
	while (ops[i].opcode && strcmp(ops[i].opcode, s) != 0)
		i++;
	opc->opcode = ops[i].opcode;
	opc->f = ops[i].f;
	return (opc);
}
