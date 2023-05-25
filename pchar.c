#include "monty.h"
/**
 * awor_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @reader: line_number
 * Return: no return
*/
void awor_pchar(stack_t **head, unsigned int reader)
{
	stack_t *t;

	t = *head;
	if (!t)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", reader);
		fclose(bus.file);
		free(bus.elements);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (t->n > 127 || t->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", reader);
		fclose(bus.file);
		free(bus.elements);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", t->n);
}
