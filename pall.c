#include "monty.h"
/**
 * awor_pall - prints the stack
 * @head: stack head
 * @reader: no used
 * Return: no return
*/
void awor_pall(stack_t **head, unsigned int reader)
{
	stack_t *t;
	(void)reader;

	t = *head;
	if (t == NULL)
		return;
	while (t)
	{
		printf("%d\n", t->n);
		t = t->next;
	}
}
