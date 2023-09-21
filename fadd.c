#include "monty.h"
/**
 * fadd - add to stack
 * @head: head
 * @count: count
 * Return: void
 */
void fadd(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		clearstack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	tmp = a->n + a->next->n;
	a->next->n = tmp;
	*head = a->next;
	free(a);
}
