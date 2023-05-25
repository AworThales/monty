#include "monty.h"
/**
 * addnode - add node to head stack
 * @head: head of a stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

	stack_t *start_node, *tha;

	tha = *head;
	start_node = malloc(sizeof(stack_t));
	if (start_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (tha)
		tha->prev = start_node;
	start_node->n = n;
	start_node->next = *head;
	start_node->prev = NULL;
	*head = start_node;
}
