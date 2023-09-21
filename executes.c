#include "monty.h"
/**
* execute - functin exec
* @stack: linked head
* @count: count
* @file_out: input
* @line: line
* Return: int
*/
int execute(char *line, stack_t **stack, unsigned int count, FILE *file_out)
{
	instruction_t funct[] = { 
				{"push", stack_push},{"pall", fpall},
				{"pint", fpint},{"swap", fswap},
				{"pop", fpop},{"add", fadd},
				{"nop", fnop},{"sub", fsub},
				{"div", fdiv},{"mul", fmul},
				{"mod", fmmod},{"pstr", fpstr},
				{"pchar", fpchar},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *o;

	o = strtok(line, " \n\t");
	if (o && o[0] == '#')
	{
		return (0);
	}
	bus.arg = strtok(NULL, " \n\t");
	while (funct[i].opcode && o)
	{
		if (strcmp(o, funct[i].opcode) == 0)
		{	funct[i].f(stack, count);
			return (0);
		}
		i++;
	}
	if (o && funct[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, o);
		fclose(file_out);
		free(line);
		clearstack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
