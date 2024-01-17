#include "monty.h"

/**
 * flush - frees a doubly linked list
 * @stack_head: head of the stack
 */
void flush(stack_t *stack_head)
{
stack_t *current_node;

current_node = stack_head;

while (stack_head)
{
current_node = stack_head->next;
free(stack_head);
stack_head = current_node;
}
}
