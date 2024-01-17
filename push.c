#include "monty.h"
/**
 * push_node - add node to the stack
 * @head: stack head
 * @count: line_number
 * Return: no retstruct MyStruct carry_t;urn
*/
void push_node(stack_t **head, unsigned int count)
{
int n, j = 0, flag = 0;

if (carry.arg)
{
if (carry.arg[0] == '-')
j++;
for (; carry.arg[j] != '\0'; j++)
{
if (carry.arg[j] > 57 || carry.arg[j] < 48)
flag = 1;
}
if (flag == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", count);
fclose(carry.file);
free(carry.content);
flush(*head);
exit(EXIT_FAILURE);
}
}
else
{
fprintf(stderr, "L%d: usage: push integer\n", count);
fclose(carry.file);
free(carry.content);
flush(*head);
exit(EXIT_FAILURE);
}
n = atoi(carry.arg);
if (carry.lifi == 0)
add_node_to_stack(head, n);
else
creat_queue(head, n);
}
