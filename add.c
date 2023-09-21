#include "main.h"
/**
 * _addn - addnodes
 * @head: head
 * @n: new value
 * Return: void
*/
void _addn(stack_t **head, int n)
{

	stack_t *newnode, *tmp;

	tmp = *head;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (tmp)
	{
		tmp->prev = newnode;
	}
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
}
