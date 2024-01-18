#include "monty.h"

/**
 * div_nodes - divides the top element by the second top element of the stack.
 * @stack_head: pointer to the head of the stack
 * @line_number: line number in the file
 * Return: void
 */
void div_nodes(stack_t **stack_head, unsigned int line_number)
{
    stack_t *current_node;
    int stack_length = 0, result;

    current_node = *stack_head;

    while (current_node)
    {
        current_node = current_node->next;
        stack_length++;
    }

    if (stack_length < 2)
    {
        fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
        fclose(carry.file);
        free(carry.content);
        flush(*stack_head);
        exit(EXIT_FAILURE);
    }

    current_node = *stack_head;

    if (current_node->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", line_number);
        fclose(carry.file);
        free(carry.content);
        flush(*stack_head);
        exit(EXIT_FAILURE);
    }

    result = current_node->next->n / current_node->n;
    current_node->next->n = result;
    *stack_head = current_node->next;
    free(current_node);
}
