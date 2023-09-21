#include "monty.h"
/**
 * _queue - printntop
 * @head: head
 * @count: input
 * Return: void
*/
void _queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.lifi = 1;
}


/**
 * aqueue - add to the tail
 * @n: input
 * @head: head
 * Return: void
*/
void aqueue(stack_t **head, int n)
{
	stack_t *newnode;
	stack_t *tmp = *head;

	newnode = malloc(sizeof(stack_t));
	
	if (newnode == NULL)
	{
		printf("Error\n");
	}
	newnode->n = n;
	newnode->next = NULL;
	if (tmp)
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
	}
	if (!tmp)
	{
		*head = newnode;
		newnode->prev = NULL;
	}
	else
	{
		tmp->next = newnode;
		newnode->prev = tmp;
	}
}
