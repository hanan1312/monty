#include "monty.h"
/**
 * add_node_to_stack - adds a node to the head of the stack
 * @stack_head: pointer to the head of the stack
 * @new_value: value to be added to the new node
 * Return: void
 */
void add_node_to_stack(stack_t **stack_head, int new_value)
{
stack_t *new_node, *current_node;

current_node = *stack_head;

new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: Unable to allocate memory for new node\n");
exit(EXIT_FAILURE);
}

if (current_node != NULL)
current_node->prev = new_node;

new_node->n = new_value;
new_node->next = *stack_head;
new_node->prev = NULL;

*stack_head = new_node;
}
