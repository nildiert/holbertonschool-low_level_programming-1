#include "monty.h"

void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *plates = NULL;


	UNUSED(line_number);
	plates = malloc(sizeof(stack_t));
	if (plates == NULL)
		exit(EXIT_FAILURE);


	plates->n = data;
	plates->prev = NULL;


	if (*stack == NULL)
	{
		plates->next = NULL;
		*stack = plates;
	}

	else
	{
		plates->next = *stack;
		(*stack)->prev = plates;
		*stack = plates;
	}

}
