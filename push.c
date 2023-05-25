#include "monty.h"
/**
 * awor_push - add node to a stack
 * @head: stack head
 * @reader: line_number
 * Return: no return
*/
void awor_push(stack_t **head, unsigned int reader)
{
	int n, t = 0, flack = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			t++;
		for (; bus.arg[t] != '\0'; t++)
		{
			if (bus.arg[t] > 57 || bus.arg[t] < 48)
				flack = 1; }
		if (flack == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", reader);
			fclose(bus.file);
			free(bus.elements);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", reader);
		fclose(bus.file);
		free(bus.elements);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
