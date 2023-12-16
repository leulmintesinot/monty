#include "monty.h"

/**
 * pall - prints the values of a stack_t
 * @stack: pointer to the top mode node of a stack_t
 * @line_number: current working line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = (*stack)->next;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	(void)line_number;
}
