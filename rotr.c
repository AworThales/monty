#include "monty.h"
/**
  *awor_rotr- rotates the stack to the bottom
  *@head: stack head
  *@reader: line_number
  *Return: no return
 */
void awor_rotr(stack_t **head, __attribute__((unused)) unsigned int reader)
{
	stack_t *extract;

	extract = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (extract->next)
	{
		extract = extract->next;
	}
	extract->next = *head;
	extract->prev->next = NULL;
	extract->prev = NULL;
	(*head)->prev = extract;
	(*head) = extract;
}
