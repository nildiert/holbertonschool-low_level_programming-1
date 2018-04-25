#include "monty.h"

void op_push(stackt_t **stack, unsigned int line_number)
{
	stack_t plates = NULL;
	int i;

	plates = malloc(sizeof(stack_t));
	if (plates == NULL)
		error(malloc);


	plates->n = data;
	plates->prev = NULL;


	if (stack == NULL)
	{
		plates->next = NULL;
		head = plates;
	}

	else
	{
		plates->next = head;
		head->prev = plates;
		head = plates;
	}

}
