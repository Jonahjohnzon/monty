#include "monty.h"
/**
 * fpop - top pop
 * @head: head
 * @count: input
 * Return: void
*/
void fpop(stack_t **head, unsigned int count)
{
	stack_t *a;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.content);
		clearstack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	*head = a->next;
	free(a);
}
