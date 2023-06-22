#include "monty.h"

/**
 * swap - swaps the top element of stack
 * @num_line: mu, of elem
 * @arg:arguments
 *
 */

void swap(unsigned int num_line, char *arg __attribute__((unused)))
{
	int ptr;

	if (!st || !st->next)
	{
		fprintf(stderr, "L%u: can't swap two stacks\n", num_line);
		exit(EXIT_FAILURE);
	}
	ptr = st->n;
	st->n = st->next->n;
	st->next->n = ptr;
}
