#include "brainfuck.h"

/*
 * s: the brainfuck program string
 * i: index of s being checked
 * b: value of the current byte
*/

int		b_func(char *s, int i, int *b, t_stack *stack)
{
	if (s[i] == '\0')
		return (1);
	if (s[i] == '>')
		++b;
	else if (s[i] == '<')
		--b;
	else if (s[i] == '+')
		++*b;
	else if (s[i] == '-')
		--*b;
	else if (s[i] == '.')
		write(1, b, 1);
	else if (s[i] == '[')
		return (b_func(s, b_open(s, i, b, stack), b, stack));
	else if (s[i] == ']')
		return (b_func(s, b_close(s, i, b, stack), b, stack));
	return (b_func(s, ++i, b, stack));
}

int		b_open(char *s, int i, int *b, t_stack *stack)
{
	if (*b != 0)
	{
		if (stack->head->pos != i)
			push(stack, i);
	}
	else
	{
		while (s[i] != ']')
			i++;
	}
	return (++i);
}

int		b_close(char *s, int i, int *b, t_stack *stack)
{
	if (*b != 0)
		return (stack->head->pos);
	pop(stack);
	return (++i);
}