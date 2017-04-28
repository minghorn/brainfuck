#include "brainfuck.h"

void	brainfuck(char *s)
{
	int		*b;
	int		i;

	i = 0;
	b = ft_brzero();
	printf("Inside brainfuck\n");
	if (b)
	{
		printf("initialization worked\n");
		b_func(s, i, b);
	}
	free(b);
	b = NULL;
}
