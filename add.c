#include "monty.h"

/**
 * add - adds the top element of the stack
 * @num_line:num of elements
 * @arg:arguments
 *
 */

void add(unsigned int num_line, char *arg __attribute__((unused)))
{
	if (!st || !st->next)
	{
		fprintf(stderr, "L%u: can't add, stack is less\n", num_line);
		exit(EXIT_FAILURE);
	}
	st->next->n += st->n;
	pop(num_line, arg);
}
