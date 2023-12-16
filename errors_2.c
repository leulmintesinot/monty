#include "monty.h"

/**
 * pop_error - prints pop error messages
 * @line_number: where error occured
 *
 * Return: EXIT_FAILURE
 */
int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}


/**
 * pint_error - prints pint error messages
 * @line_number: where error occurred.
 *
 * Return: EXIT_FAILURE
 */
int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}


/**
 * short_stack_error - Prints monty math function error messages
 * for stacks/queues smaller than two nodes.
 * @line_number: where error occurred.
 * @op: operation where the error occurred.
 *
 * Return: EXIT_FAILURE
 */
int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}


/**
 * div_error - prints division error messages for division by 0.
 * @line_number: where error occurred.
 *
 * Return: EXIT_FAILURE
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}


/**
 * pchar_error - prints pchar error messages for empty stacks
 * and non-character values.
 * @line_number: where error occurred.
 * @msg: corresponding error message to print.
 *
 * Return: EXIT_FAILURE
 */
int pchar_error(unsigned int line_number, char *msg)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, msg);
	return (EXIT_FAILURE);
}
