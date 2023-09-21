#include "main.h"
/**
 * aqueue - add /queue
 * @n: newvalue/
 * @head: stack head
 * Return: void
*/
void aqueue(stack_t **head, int n)
{
	stack_t *newnode, *tmp;

	tmp = *head;
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
