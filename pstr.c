#include "monty.h"
/**
 * awor_pstr - prints a string starting at the top of a stack,
 * followed by the new
 * @head: stack head
 * @reader: line_number
 * Return: no return
*/
void awor_pstr(stack_t **head, unsigned int reader)
{
	stack_t *t;
	(void)reader;

	t = *head;
	while (t)
	{
		if (t->n > 127 || t->n <= 0)
		{
			break;
		}
		printf("%c", t->n);
		t = t->next;
	}
	printf("\n");
}
