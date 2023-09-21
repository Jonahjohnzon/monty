#include "monty.h"
/**
  *fsub- subtract
  *@head: head
  *@count: input
  *Return: void
 */
void fsub(stack_t **head, unsigned int count)
{
	stack_t *tmp;
	int a, node;

	tmp = *head;
	for (node = 0; tmp != NULL; node++)
	{
		tmp = tmp->next;
	}
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		clearstack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	a = tmp->next->n - tmp->n;
	tmp->next->n = a;
	*head = tmp->next;
	free(tmp);
}
