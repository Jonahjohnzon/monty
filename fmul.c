#include "monty.h"
/**
 * fmul - multiplication
 * @head: head
 * @count: count
 * Return: void
*/
void f_mul(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		clearstack(*head);
		exit(EXIT_FAILURE);
	}

	a = *head;
	tmp = a->next->n * a->n;
	a->next->n = tmp;
	*head = a->next;
	free(a);
}
