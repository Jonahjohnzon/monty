#include  "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
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
	char *line;
	FILE *file_out;
	size_t byt_size = 0;
	ssize_t result = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_out = fopen(argv[1], "r");
	bus.file = file_out;
	if (!file_out)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (result > 0)
	{
		line = NULL;
		result = getline(&line, &byt_size, file_out);
		bus.content = line;
		count++;
		if (result > 0)
		{
			execute(line, &stack, count, file_out);
		}
		free(line);
	}
	clearstack(stack);
	fclose(file_out);
	return (0);
}
