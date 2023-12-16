#include "monty.h"

/**
 * pop - removes the top value element of a stack_t
 * @stack: pointer to the top node of a stack_t 
 * @line_number: the current working line number
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *next = NULL;


	if ((*stack)->next == NULL)
	{
		set_op_tok_error(pop_error(line_number));
		return;
	}


	next = (*stack)->next->next;
	free((*stack)->next);
	if (next)
		next->prev = *stack;
	(*stack)->next = next;
}
