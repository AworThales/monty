#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @reader: line_counter
* @file: poiner to monty file
* @elements: line elements
* Return: no return
*/
int execute(char *elements, stack_t **stack, unsigned int reader, FILE *file)
{
	instruction_t opst[] = {
				{"push", awor_push}, {"pall", awor_pall}, {"pint", awor_pint},
				{"pop", awor_pop},
				{"swap", awor_swap},
				{"add", awor_add},
				{"nop", awor_nop},
				{"sub", awor_sub},
				{"div", awor_div},
				{"mul", awor_mul},
				{"mod", awor_mod},
				{"pchar", awor_pchar},
				{"pstr", awor_pstr},
				{"rotl", awor_rotl},
				{"rotr", awor_rotr},
				{"queue", awor_queue},
				{"stack", awor_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(elements, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, reader);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", reader, op);
		fclose(file);
		free(elements);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
