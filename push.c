#include "monty.h"

/**
 * push - adds new element in a stack
 * @num_line:number of lines
 * @arg:returns the arguments
 *
 */

void push(unsigned int num_line, const char *arg)
{
	int count;
	stack_t *newNode;

	if (!arg || !isdigit(*arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", num_line);
		exit(EXIT_FAILURE);
	}
	count = atoi(arg);

	newNode = malloc(sizeof(stack_t));
	if (!newNode)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newNode->n = count;
	newNode->prev = NULL;
	newNode->next = stack;

	if (stack)
		stack->prev = newNode;
	stack = newNode;
}
