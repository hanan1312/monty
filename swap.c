#include "monty.h"

/**
 * swap_top_two_elements - swaps the top two elements of the stack.
 * @stack_head: pointer to the head of the stack
 * @line_number: line number in the file
 * Return: void
 */
void swap_top_two_nodes(stack_t **stack_head, unsigned int line_number)
{
stack_t *current_node;
int stack_length = 0, temp;

current_node = *stack_head;

while (current_node)
{
current_node = current_node->next;
stack_length++;
}

if (stack_length < 2)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
fclose(carry.file);
free(carry.content);
flush(*stack_head);
exit(EXIT_FAILURE);
}

current_node = *stack_head;
temp = current_node->n;
current_node->n = current_node->next->n;
current_node->next->n = temp;
}

