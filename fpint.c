#include "monty.h"
/**
 * fpint - top print
 * @head: head
 * @count: input
 * Return: void
*/
void fpint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		clearstack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}
