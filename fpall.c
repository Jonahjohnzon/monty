#include "main.h"
/**
 * fpall - print stack
 * @head: head
 * @count: input
 * Return: void
*/
void fpall(stack_t **head, unsigned int count)
{
	stack_t *a;
	(void)count;

	a = *head;
	if (a == NULL)
	{
		return;
	}
	while (a)
	{
		printf("%d\n", a->n);
		a = a->next;
	}
}
