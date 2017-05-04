#include "brainfuck.h"

void	brainfuck(char *s)
{
	int		*b;
	int		i;
	t_stack	*stack;

	i = 0;
	b = ft_brzero();
	stack = init_stack();
	if (b && stack)
		b_func(s, i, b, stack);
	free(b);
	b = NULL;
}
