#include "monty.h"
/**
 * awor_mod - computes the rest of the division of a second
 * top elements of a stack by the top elements of a stack
 * @head: stack head
 * @reader: line_number
 * Return: no return
*/
void awor_mod(stack_t **head, unsigned int reader)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", reader);
		fclose(bus.file);
		free(bus.elements);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	t = *head;
	if (t->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", reader);
		fclose(bus.file);
		free(bus.elements);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tha = t->next->n % t->n;
	t->next->n = tha;
	*head = t->next;
	free(t);
}
