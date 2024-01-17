#include "monty.h"
/**
 * f_pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void pint_node(stack_t **head, unsigned int counter)
{

if (*head == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
fclose(carry.file);
free(carry.content);
flush(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}
