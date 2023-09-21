#include "monty.h"
/**
 * fswap - add twop element
 * @head: head
 * @count: input
 * Return: void
*/
void fswap(stack_t **head, unsigned int count)
{
	stack_t *a;
	int length = 0, tmp;

	a = *head;
	while (a)
	{
		a = a->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		clearstack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	tmp = a->n;

	a->n = a->next->n;
	a->next->n = tmp;
}
