#include "monty.h"
/**
 * awor_pop - prints a top
 * @head: stack head
 * @reader: line_number
 * Return: no return
*/
void awor_pop(stack_t **head, unsigned int reader)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", reader);
		fclose(bus.file);
		free(bus.elements);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
