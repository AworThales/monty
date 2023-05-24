#include "monty.h"
bus_thales bus = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of the arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *elements;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int reader = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		elements = NULL;
		read_line = getline(&elements, &size, file);
		bus.elements = elements;
		reader++;
		if (read_line > 0)
		{
			execute(elements, &stack, reader, file);
		}
		free(elements);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
