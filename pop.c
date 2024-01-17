#include "monty.h"

/**
 * pop_top_element - removes the top element of the stack.
 * @stack_head: pointer to the head of the stack
 * @line_number: line number in the file
 * Return: void
 */
void pop_node(stack_t **stack_head, unsigned int line_number)
{
stack_t *current_node;

if (*stack_head == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
fclose(carry.file);
free(carry.content);
flush(*stack_head);
exit(EXIT_FAILURE);
}

current_node = *stack_head;
*stack_head = current_node->next;
free(current_node);
}
