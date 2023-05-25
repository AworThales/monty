#include "monty.h"
/**
 * awor_swap - adds a top two elements of a stack.
 * @head: stack head
 * @reader: line_number
 * Return: no return
*/
void awor_swap(stack_t **head, unsigned int reader)
{
	stack_t *t;
	int length = 0, tha;

	t = *head;
	while (t)
	{
		t = t->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", reader);
		fclose(bus.file);
		free(bus.elements);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	t = *head;
	tha = t->n;
	t->n = t->next->n;
	t->next->n = tha;
}
