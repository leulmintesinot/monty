#include "monty.h"

/**
 * push - pushes a value to a stack_t linked list.
 * @stack: pointer to the top node of a stack_t linked list.
 * @line_number: current working line number
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *new_ptr;
	int i;
	new_ptr = malloc(sizeof(stack_t));

	if (new_ptr == NULL)
	{
		set_op_tok_error(malloc_error());
		return;
	}
	if (op_toks[1] == NULL)
	{
		set_op_tok_error(no_int_error(line_number));
		return;
	}
	for (i = 0; op_toks[1][i]; i++)
	{
		if (op_toks[1][i] == '-' && i == 0)
			continue;
		if (op_toks[1][i] < '0' || op_toks[1][i] > '9')
		{
			set_op_tok_error(no_int_error(line_number));
			return;
		}
	}
	new_ptr->n = atoi(op_toks[1]);
	if (check_mode(*stack) == STACK)
	{
		temp = (*stack)->next;
		new_ptr->prev = *stack;
		new_ptr->next = temp;
		if (temp)
			temp->prev = new_ptr;
		(*stack)->next = new_ptr;
	}
	else
	{
		temp = *stack;
		while (temp->next)
			temp = temp->next;
		new_ptr->prev = temp;
		new_ptr->next = NULL;
		temp->next = new_ptr;
	}
}
