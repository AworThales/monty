#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of a stack
*/
void free_stack(stack_t *head)
{
	stack_t *tha;

	tha = head;
	while (head)
	{
		tha = head->next;
		free(head);
		head = tha;
	}
}
