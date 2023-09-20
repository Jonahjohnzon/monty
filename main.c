#include  "main.h"
/**
 * clearstack - free
 * @a: input
 */
void clearstack(stack_t *a)
{
	stack_t *tmp;
	
	tmp = a;
	while (a)
	{
		tmp = a->next;
		free(a);
		a = tmp;
	}

}
/**
 * main - main entry
 * @argc: input
 * @argv: input
 * Return: int
 */
int main(int argc, char *argv[])
{
	bus_t bus = {NULL, NULL, NULL, 0};
	FILE *file_out;
	ssize_t byt_size = 0;
	ssize_t result = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;
	char *line;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_out = fopen(argv[1], "r");
	bus->file = file;
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE)
	}
	while (result > 0)
	{
		line = NULL;
		result = getline(&line, &byt_size, file_out);
		bus->content = line;
		count++;
		if (result > 0)
		{
			execute(line, &stack, count, file_out);
		}
		free(line);
	}
	clearstack(stack);
	fclose(file_out);
	return(0);
}
