#include "monty.h"
/**
 * fpstr - prints string
 * @head: head
 * @count: input
 * Return: return
*/
void fpstr(stack_t **head, unsigned int count)
{
	stack_t *a;

	(void)count;

	a = *head;
	while (a)
	{
		if (a->n > 127 || a->n <= 0)
		{
			break;
		}
		printf("%c", a->n);
		a = a->next;
	}
	printf("\n");
}
