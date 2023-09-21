#include "monty.h"
/**
 * fdiv - division
 * @head: head
 * @count: count
 * Return: void
*/
void fdiv(stack_t **head, unsigned int count)
{
	stack_t *a;
	int length = 0,tmp;

	a = *head;
	while (a)
	{
		a = a->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		clearstack(*head);
		exit(EXIT_FAILURE);
	}

	a = *head;

	if (a->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		clearstack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = a->next->n / a->n;
	a->next->n = tmp;
	*head = a->next;
	free(a);
}
