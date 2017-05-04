#include "brainfuck.h"

t_item *new_item(int pos, t_item *next)
{
	t_item *new;
	
	new = (t_item*)malloc(sizeof(t_item));
	if (!new)
		return (0);
	new->next = next;
	new->pos = pos;
	return (new);
}

/*
** Sentinel node has value of -1, sentinel will always be the tail
*/

t_stack	*init_stack(void)
{
	t_stack *stack;
	
	stack = (t_stack*)malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	stack->head = new_item(-1, NULL);
	stack->size = 0;
	return (stack);
}

//Pushes a new item to the head of the stack
int	push(t_stack *stack, int pos)
{
	t_item *item;
	
	item = new_item(pos, stack->head);
	if (!item)
		return (0);
	stack->head = item;
	stack->size += 1;
	return (1);
}

// Pops the head off the stack
int	pop(t_stack *stack)
{
	t_item *save;
	
	save = stack->head;
	stack->head = stack->head->next;
	free(save);
	save = NULL;
	stack->size -= 1;
	return (1);
}