#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous elements of the stack (or queue)
 * @next: points to the next elements of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line elements
 * @arg: value
 * @file: pointer to monty file
 * @elements: line elements
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *elements;
	int lifi;
}  bus_thales;
extern bus_thales bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *elements);
void awor_push(stack_t **head, unsigned int number);
void awor_pall(stack_t **head, unsigned int number);
void awor_pint(stack_t **head, unsigned int number);
int execute(char *elements, stack_t **head, unsigned int reader, FILE *file);
void free_stack(stack_t *head);
void awor_pop(stack_t **head, unsigned int reader);
void awor_swap(stack_t **head, unsigned int reader);
void awor_add(stack_t **head, unsigned int reader);
void awor_nop(stack_t **head, unsigned int reader);
void awor_sub(stack_t **head, unsigned int reader);
void awor_div(stack_t **head, unsigned int reader);
void awor_mul(stack_t **head, unsigned int reader);
void awor_mod(stack_t **head, unsigned int reader);
void awor_pchar(stack_t **head, unsigned int reader);
void awor_pstr(stack_t **head, unsigned int reader);
void awor_rotl(stack_t **head, unsigned int reader);
void awor_rotr(stack_t **head, __attribute__((unused)) unsigned int reader);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void awor_queue(stack_t **head, unsigned int reader);
void awor_stack(stack_t **head, unsigned int reader);
#endif

