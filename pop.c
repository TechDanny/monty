#include "monty.h"

/**
 * pop - removes element from top of stack
 * @num_line:total elem
 * @arg:arguments
 *
 */

void pop(unsigned int num_line, char *arg __attribute__((unused)))
{
	stack_t *ptr;

	if (!st)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", num_line);
		exit(EXIT_FAILURE);
	}
	ptr = st;
	st = st->next;

	if (st)
		st->prev = NULL;

	free(ptr);
}
