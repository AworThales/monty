#include "monty.h"
/**
  *awor_sub- sustration
  *@head: stack head
  *@reader: line_number
  *Return: no return
 */
void awor_sub(stack_t **head, unsigned int reader)
{
	stack_t *tha;
	int nodes, sas;

	tha = *head;
	for (nodes = 0; tha != NULL; nodes++)
		tha = tha->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", reader);
		fclose(bus.file);
		free(bus.elements);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tha = *head;
	sas = tha->next->n - tha->n;
	tha->next->n = sas;
	*head = tha->next;
	free(tha);
}
