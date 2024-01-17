#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void push_node(stack_t **head, unsigned int count)
{
int n, j = 0, flag = 0;

if (carry_t.arg)
{
if (carry_t.arg[0] == '-')
j++;
for (; carry_t.arg[j] != '\0'; j++)
{
if (carry_t.arg[j] > 57 || carry_t.arg[j] < 48)
flag = 1; }
if (flag == 1)
{ fprintf(stderr, "L%d: usage: push integer\n", count);
fclose(carry_t.file);
free(carry_t.content);
free_stack(*head);
exit(EXIT_FAILURE); }}
else
{ fprintf(stderr, "L%d: usage: push integer\n", count);
fclose(carry_t.file);
free(carry_t.content);
free_stack(*head);
exit(EXIT_FAILURE); }
n = atoi(carry_t.arg);
if (carry_t.lifi == 0)
addnode(head, n);
else
creat_queue(head, n);
}
