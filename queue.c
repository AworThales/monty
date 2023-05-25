#include "monty.h"
/**
 * awor_queue - prints the top
 * @head: stack head
 * @reader: line_number
 * Return: no return
*/
void awor_queue(stack_t **head, unsigned int reader)
{
	(void)head;
	(void)reader;
	bus.lifi = 1;
}

/**
 * addqueue - add node to tail stack
 * @n: new_value
 * @head: head of stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *start_node, *tha;

	tha = *head;
	start_node = malloc(sizeof(stack_t));
	if (start_node == NULL)
	{
		printf("Error\n");
	}
	start_node->n = n;
	start_node->next = NULL;
	if (tha)
	{
		while (tha->next)
			tha = tha->next;
	}
	if (!tha)
	{
		*head = start_node;
		start_node->prev = NULL;
	}
	else
	{
		tha->next = start_node;
		start_node->prev = tha;
	}
}
