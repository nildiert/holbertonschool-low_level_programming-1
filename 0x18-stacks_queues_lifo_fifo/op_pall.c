#include "monty.h"

void op_pall(stack_t **stack, unsigned int line_number)
{
	UNUSED(line_number);
	if (*stack != NULL)
	{
		while (*stack)
		{
			printf("%d\n", (*stack)->n);
			*stack = (*stack)->next;
		}
	}
}
