#include "monty.h"

/**
 * pint - prints the top value of a stack_t
 * @stack: pointer to the top node of a stack_t
 * @line_number: the current working line number
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL)
	{
		set_op_tok_error(pint_error(line_number));
		return;
	}


	printf("%d\n", (*stack)->next->n);
}
