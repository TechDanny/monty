#include "monty.h"

/**
 * pall - prints  in the stack from top to bottom
 * @num_line:lines in a stack
 * @arg:arguments
 *
 */

void pall(unsigned int num_line __attribute__((unused)),
		char *arg __attribute__((unused)))
{
	stack_t *ptr = stack;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
