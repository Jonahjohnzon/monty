#include "main.h"
/**
 * stack_push - push
 * @head: begining
 * @count: input
 * Return: void
*/
void stack_push(stack_t **head, unsigned int count)
{
	int n;

	int i = 0, f = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				f = 1;
	}
		if (f == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			clearstack(*head);
			exit(EXIT_FAILURE);
	}}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		clearstack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		_addn(head, n);
	else
		aqueue(head, n);
}
