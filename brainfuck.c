#include "brainfuck.h"

void	brainfuck(char *s)
{
	int		*b;
	int		i;

	i = 0;
	b = ft_brzero();
	if (b)
		b_func(s, i, b);
	free(b);
	b = NULL;
}
