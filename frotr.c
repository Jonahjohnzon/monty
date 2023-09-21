#include "monty.h"
/**
  *frotr- rotate
  *@head: head
  *@count: input
  *Return: void
 */
void frotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *c;

	c = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	while (c->next)
	{
		c = c->next;
	}

	c->next = *head;
	c->prev->next = NULL;
	c->prev = NULL;
	(*head)->prev = c;
	(*head) = c;
}
