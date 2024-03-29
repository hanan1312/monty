#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;



/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


typedef struct carry_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  carry_t;
extern carry_t carry;

void push_node(stack_t **head, unsigned int count);
void creat_queue(stack_t **head, int n);
void pint_node(stack_t **head, unsigned int counter);
void print_stack(stack_t **stack_head, unsigned int unused_counter);
void add_node_to_stack(stack_t **stack_head, int new_value);
void flush(stack_t *stack_head);
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
void no_action(stack_t **stack_head, unsigned int line_number);
void add_top_two_nodes(stack_t **stack_head, unsigned int line_number);
void pop_node(stack_t **stack_head, unsigned int line_number);
void swap_top_two_nodes(stack_t **stack_head, unsigned int line_number);
void sub_nodes(stack_t **stack_head, unsigned int line_number);
void f_stack(stack_t **head, unsigned int counter);
void div_nodes(stack_t **stack_head, unsigned int line_number);
void mul_nodes(stack_t **stack_head, unsigned int line_number);
void mod_nodes(stack_t **stack_head, unsigned int line_number);



#endif /* MONTY_H */