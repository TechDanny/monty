#include "monty.h"

/**
 * main - entry point
 * @argc:argument count
 * @argv:argument vectors
 *
 * Return:always 0
 */

stack_t *st = NULL;

int main(int argc, char *argv[])
{
	char ln[256];
	unsigned int num_line;
	FILE *fn;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	fn = fopen(argv[1], "r");

	if (!fn)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	num_line = 1;

	while (fgets(ln, sizeof(ln), fn))
	{
		char *oc = strtok(ln, " \t\n");
		char *arg = strtok(NULL, " \t\n");

		if (oc)
		{
			if (strcmp(oc, "push") == 0)
				push(num_line, arg);
			else if (strcmp(oc, "pall") == 0)
				pall(num_line, arg);
			else if (strcmp(oc, "pint") == 0)
				pint(num_line, arg);
			else if (strcmp(oc, "pop") == 0)
				pop(num_line, arg);
			else if (strcmp(oc, "swap") == 0)
				swap(num_line, arg);
			else if (strcmp(oc, "add") == 0)
				add(num_line, arg);
			else if (strcmp(oc, "nop") == 0)
				nop(num_line, arg);
			else
			{
				fprintf(stderr, "L%u: unknown instruction %s\n", num_line, oc);
				fclose(fn);
				return (EXIT_FAILURE);
			}
		}
		num_line++;
	}
	fclose(fn);
	return (EXIT_SUCCESS);
}
