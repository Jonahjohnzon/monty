#include "monty.h"
/**
  *frotl- rotate stack
  *@head: head
  *@count: input
  *Return: void
 */
void frotl(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *tmps = *head;
	stack_t *auxi;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	auxi = (*head)->next;
	auxi->prev = NULL;
	while (tmps->next != NULL)
	{
		tmps = tmps->next;
	}
	tmps->next = *head;

	(*head)->next = NULL;
	(*head)->prev = tmps;
	(*head) = auxi;
}
