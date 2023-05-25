#include "monty.h"
/**
  *awor_rotl- rotate the stack to the top
  *@head: stack head
  *@reader: line_number
  *Return: no return
 */
void awor_rotl(stack_t **head,  __attribute__((unused)) unsigned int reader)
{
	stack_t *tmp3 = *head, *tha;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	tha = (*head)->next;
	tha->prev = NULL;
	while (tmp3->next != NULL)
	{
		tmp3 = tmp3->next;
	}
	tmp3->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp3;
	(*head) = tha;
}
