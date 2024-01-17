#include "monty.h"
/**
 * print_stack - prints the stack
 * @stack_head: pointer to the head of the stack
 * @unused_counter: unused counter variable
 * Return: void
 */
void print_stack(stack_t **stack_head, unsigned int unused_counter)
{
stack_t *current_node;

(void)unused_counter;

current_node = *stack_head;

if (current_node == NULL)
return;

while (current_node)
{
printf("%d\n", current_node->n);
current_node = current_node->next;
}
}
