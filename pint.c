#include "monty.h"
/**
 * awor_pint - prints a top
 * @head: stack head
 * @reader: line_number
 * Return: no return
*/
void awor_pint(stack_t **head, unsigned int reader)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", reader);
		fclose(bus.file);
		free(bus.elements);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
