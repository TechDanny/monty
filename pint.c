#include "monty.h"

/**
 * pint - prints the element at the top of stack
 * @num_line:num of elements
 * @arg:arguments
 *
 */

void pint(unsigned int num_line, char *arg __attribute__((unused)))
{
	if (!st)
	{
		fprintf(stderr, "L%u: can't pint, stack empy\n", num_line);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", st->n);
}
